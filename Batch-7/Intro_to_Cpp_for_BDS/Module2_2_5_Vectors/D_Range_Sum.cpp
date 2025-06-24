#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long l, r;
        cin >> l >> r;
        long long sum = 0;
        if(l > r){
            long long tmp = l;
            l = r;
            r = tmp;
        }
        // while(l <= r){
        //     sum += l;
        //     l += 1;
        // }
        sum = r + ((r - l) * l) + (((r - l) * (r - l - 1)) / 2);
        cout << fixed << (long long) sum;
        if(t > 0) cout << endl;
    }
    return 0;
}