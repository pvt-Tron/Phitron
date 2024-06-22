#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for(int i = 0 ; i < n; i++){
        cin >> v1[i];
    }

    // for(int j = 0; j < n; j--){
    //     cout << v1[j];
    //     if(j > 0) cout << " ";
    // }

    for(int j = 0; j < n; j++){
        if(v1[j] > 0) v1[j] = 1;
        if(v1[j] < 0) v1[j] = 2;
        cout << v1[j];
        if(j < n - 1) cout << " ";
    }
    
    
    return 0;
}