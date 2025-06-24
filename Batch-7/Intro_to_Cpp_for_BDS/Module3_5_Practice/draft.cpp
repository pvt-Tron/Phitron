#include<bits/stdc++.h>
using namespace std;
int equilbIdx(vector<int> v){
    int n = v.size() - 1;
    int ni = n - 1;


    vector<int> tmp = v;
    for(int i = 1; i < n; i += 1){
        v[i] = v[i] + v[i - 1];
        if(ni < n - 1) tmp[ni] = tmp[ni] + tmp[ni + 1];
        if(tmp[ni] == v[i]) return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v1;
        for(int i = 0; i < n; i += 1){
            int num;
            cin >> num;
            v1.push_back(num);
        }
        int res = equilbIdx(v1);
        if(res) cout << "YES";
        else cout << "NO";
        if(t > 0) cout << endl;
    }
    return 0;
}