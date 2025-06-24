#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> v1(n);
    for(int i = 0; i < n; i += 1){
        cin >> v1[i];
    }
    for(int i = 0; i < n; i += 1){ // O(N + Nlog(n))
        // cout << " " << v1[i];
        for(int j = 0; j < n; j += 1){
            if(j == i) continue;
            
            if( v1[j] == v1[i] + 1){
                // cout << " j" << v1[j];
                cnt += 1;
                break;
            }
        }
    }
    // if(v1[n - 2] + 1 == v1.back()) cnt += 1;
    cout << cnt;
    
    return 0;
}