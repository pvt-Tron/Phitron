#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    vector<int> v3(n);
    cin >> v1[0];
    v2[0] = v1[0];
    for(int i = 1; i < n; i++){
        cin >> v1[i];
        v2[i] = v2[i - 1] + v1[i];
    }
    v3[n-1] = v1[n-1];
    for(int j = n - 2; j >= 0; j--){    
        v3[j] = v3[j + 1] + v1[j];
        if(v3[j] == v2[j]){
            cout << j;
            break;
        }
    }
    return 0;
}