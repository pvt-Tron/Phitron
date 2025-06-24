#include<bits/stdc++.h>
using namespace std;
int pr_post_Src(vector<int> v){
    vector<int> v1(v);
    vector<int> v2(v);
    for(int i = 0; i < v.size(); i += 1){
        if(i > 0) v1[i] = v[i] + v[i - 1];
        cout << v1[i] << " ";
    }
    cout << endl;
    int j = 0;
    int n = v.size() - 1;
    v2[0] = v[n];
    for(int i = n; i >= 0; i -= 1){
        if(i < n) v2[j] = v[i] + v[i + 1];
        j += 1;
        cout << v2[i] << " ";
    }
    cout << endl;
    for(int i = 1; i < n; i += 1){
        if(v1[i] == v2[i]) return i;
        cout << v1[i] << " ";
    }
    cout << endl;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    for(int i = 0; i < n; i += 1){
        int num;
        cin >> num;
        v1.push_back(num);
    }
    int res = pr_post_Src(v1);
    if(res) cout << res;
    else cout << "no Equilibrium";
    return 0;
}