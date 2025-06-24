#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    for(int i = 0; i < n; i += 1){
        int num;
        cin >> num;
        v1.push_back(num);
        // cout << v1[i] << num;
    }
    sort(v1.begin(), v1.end());
    int t;
    cin >> t;
    while(t--){
        int q;
        cin >> q;
        int l = 0;
        int r = n - 1;
        int flag = 0;
        int mid = (l + r) / 2;
        int i = 0;
    while(l <= r){
            if(q == v1[mid]){
                flag = 1;
                break;
            }
            if(q > v1[mid]) l = mid; // + 1;
            else r = mid; // + 1;
            mid = (l + r) / 2;
            // cout << mid << " ";
            if(i >= n / 2 + 1) break;
            i += 1;
        }    
        if(flag) cout << "YES";
        else cout << "NO";
        if(t > 0) cout << endl;
    }
    return 0;
}