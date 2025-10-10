#include<bits/stdc++.h>
using namespace std;
// void sum_n(long long int n1, long long int index){
//     long long int res1 = 0;
//     long long i;
//     for(i = index; i <= n1; i++){
//         res1 += i;
//     }
//     cout << res1;
//     return;
    // return 0;
    // int res1 = sum_n(n1, index++) + index;
    // if(index >= n1 - 1){
    //     cout << res1;
    // return 0;
    // }
    // return res1;
// }
int main()
{
    long long int n;
    cin >> n;
    long long int res1 = 0;
    long long i;
    for(i = 0; i <= n; i++){
        res1 += i;
    }
    cout << res1;
    // sum_n(n,1);
    
    return 0;
}