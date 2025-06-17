#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int* start = new int;
    *start = 1;
    while(t--){
        if(start){
            start = 0;
            delete start;
        }
        else cout << endl;
        int n;
        cin >> n;
        int ar1[n];
        int even = 0;
        int odd = 0;
        for(int i = 0; i < n; i += 1){
            cin >> ar1[i];
            if(ar1[i]%2 == 0) even += 1;
            else odd += 1;
        }
        int i = 0;
        if(n%2 != 0){
            cout << "-1";
            continue;
        }
        if(odd == even){
            cout << "0";
            continue;
        }
        int result = 0;
        sort(ar1, ar1 + n);
        if(odd >= even){
            int k = odd - n/2;
            int i = 0;
            cout << k;
            // while(k--){
            //     if(ar1[i]%2 != 0){
            //         ar1[i]++;
            //     }
            //     result += 1;
            //     i += 1;
            // }
        }
        else{
            int k = even - n/2;
            int i = 0;
            cout << k;
            // while(k--){
            //     if(ar1[i]%2 == 0){
            //         ar1[i]++;
            //     }
            //     result += 1;
            //     i += 1;
            // }
        }
        // cout << result;
    }
    return 0;
}