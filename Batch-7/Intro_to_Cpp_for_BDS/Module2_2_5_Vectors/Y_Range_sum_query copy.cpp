#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> v2;
    for(int i = 0; i < n; i += 1){
        cin >> v2[i];
        if(i > 0) v2[i] += v2[i - 1];
    }
    while(q--){
        int l, r;
        long long sum;
        cin >> l >> r;
        if(l == 1) sum = v2[r - 1];
        else sum = v2[r - 1] - v2[l - 2];
        cout << sum;
        if(q > 0) cout << endl;
    }
    return 0;
}
    // if(n == 1){
    //     cin >> n;
    //     cout << n;
    //     while(q--){
    //         cout << endl;
    //         int l, r;
    //         cin >> l >> r;
    //         cout << n;
    //     }    
    // }