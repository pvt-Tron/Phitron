#include<bits/stdc++.h>
using namespace std;
// int mypow__2st(int pw, int ix){
//     for(int j = 2; j <= ix; j = j + 2){
//         int pw2 = pw;
//         for(int k = 0; k < j; k++){
//             pw *= pw;
//         }
//         pw = pw + pw2;
//         cout << pw << " ";
//     }
//     return pw;
// }
long int my_pow(long int pwd, int st2){
    if(st2 == 1) return pwd;
    return my_pow(pwd, st2 - 1) * pwd;
}
long int mypow__2st(long int pw, int ix, int stp){
    if(stp > ix) return 1;
    long int pw2 = my_pow(pw, stp);
    //cout << pw2;
    return mypow__2st(pw, ix, stp + 2) + pw2;
}

int main()
{
    long int n, index;
    cin >> n >> index;
    long int res1 = mypow__2st(n, index, 2);
    cout << res1 - 1;
    return 0;
}