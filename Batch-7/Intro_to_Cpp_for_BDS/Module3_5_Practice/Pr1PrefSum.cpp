#include<bits/stdc++.h>
using namespace std;
vector<int> prfixSum(vector<int> v){

    for(int i = 0; i < v.size(); i += 1){
        if(i > 0) v[i] = v[i] + v[i - 1];
    }
    return v;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    for(int i = 0; i < n; i += 1){
        int num;
        cin >> num;
        v1.push_back(num);
    }
    v1 = prfixSum(v1);
    for(int i = 0; i < v1.size(); i += 1) cout << v1[i] << " ";
    return 0;
}
// vector<int> prfixSum(vector<int> v){ //, int n){
//     // vector<int> v;
//     // for(int i = 0; i < n; i += 1){
//     //     cin >> v[i];
//     //     cout << v[i] << " ";
//     // }
//     for(int i = 0; i < v.size(); i += 1){
//         if(i > 0) v[i] = v[i] + v[i - 1];
//         // cout << v[i] << " ";
//     }
//     return v;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     // cout << n;
//     // int v1[n];
//     vector<int> v1;
//     for(int i = 0; i < n; i += 1){
//         int num;
//         cin >> num;
//         v1.push_back(num);
//         // cout << v1[i] << " ";
//     }
//     // v1.clear();
//     v1 = prfixSum(v1);
//     // vector<int> v2 = prfixSum(v1);
//     for(int i = 0; i < v1.size(); i += 1) cout << v1[i] << " ";
//     // for(int i = 0; i < v2.size(); i += 1) cout << v2[i] << " ";
//     return 0;
// }