#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q; // O(N) + O(Q)
    cin >> n >> q;
    vector<long long int> v2(n);
    for(int i = 0; i < n; i += 1){
        cin >> v2[i];
        if(i > 0) v2[i] += v2[i - 1];
    }
    while(q--){
        int l, r;
        long long int sum;
        cin >> l >> r;
        if(l == 1) sum = v2[r - 1];
        else sum = v2[r - 1] - v2[l - 2];
        cout << sum; // (long long int)
        if(q > 0) cout << endl;
    }
    return 0;
}