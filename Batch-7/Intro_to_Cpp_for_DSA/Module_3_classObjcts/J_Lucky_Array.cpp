#include<bits/stdc++.h>
// #include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i += 1){
        cin >> ar[i];
    }
    int minX = ar[0];
    int idx = 0;
    for(int i = 1; i < n; i += 1){
        if(minX > ar[i]) minX = ar[i];
    }
    for(int i = 0; i < n; i += 1){
        if(minX == ar[i]) idx++;
    }
    if(idx%2 != 0) cout << "Lucky";
    else cout << "Unlucky";
    return 0;
}
// #include<bits/stdc++.h>
// // #include<limits.h>
// using namespace std;
// int main()
// {
//     int n;
//     int ar[n];
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         cin >> ar[i];
//     }
//     int mnOd = INT_MAX;
//     for(int i = 0; i < n; i++){
//         cout << ar[i] << " "; 
//         if(ar[i] < mnOd) mnOd = ar[i];
//     }
//     int res = 0;
//     for(int i = 0; i < n; i++){
//         if(mnOd == ar[i]) res++;
//     }
//     if(res%2 != 0) cout << "Lucky";
//     else  cout << "Unlucky";
//     return 0;
// }