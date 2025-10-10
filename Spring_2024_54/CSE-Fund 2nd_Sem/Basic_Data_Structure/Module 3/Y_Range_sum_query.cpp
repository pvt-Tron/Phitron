#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, t;
    cin >> n >> t;
    vector<long long int> qrd(n);
    for(int x = 0; x < n; x++){
        cin >> qrd[x];
    }
    long long int pre[n];
    pre[0] = qrd[0];
    for(int x = 1; x < n; x++){ // prefix suimmation
        pre[x] = pre[x - 1] + qrd[x];
    }

    while (t--)
    {
        long long int l, r;
        long long int result = 0;
        cin >> l >> r;
        l--;
        r--;
        if(l == 0)result = pre[r];
        else result = pre[r] - pre[l - 1];
        cout << result;
        if (t > 0) cout << endl;
    }
    return 0;
}