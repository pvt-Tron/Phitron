#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> v1(t);
    for(int i = 0 ; i < t; i++){
        cin >> v1[i];
    }
    for(int j = t - 1; j >= 0; j--){
        cout << v1[j];
        if(j > 0) cout << " ";
    }
    
    
    return 0;
}