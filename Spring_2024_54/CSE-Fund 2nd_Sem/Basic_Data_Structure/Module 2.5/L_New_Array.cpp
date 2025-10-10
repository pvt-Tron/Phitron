#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;   
    vector<int> v1(t);
    vector<int> v2(t);
    vector<int> v3(t*2);
    for(int j = 0; j < t; j++){
            cin >> v1[j];
    }
    for(int j = 0; j < t; j++){
            cin >> v2[j];
    }
    v3 = v2;
    for(int j = 0; j < t; j++){
        v3.push_back(v1[j]);
    }
    for(int j = 0; j < t * 2; j++){
        cout << v3[j];
        if(j < t * 2 - 1) cout << " ";
    }
    // string s;
    // for(int k = 1 ; k <= 2; k++){
    //     getline(cin, s);
    //     for(int j = 0; )
    // }
    
    return 0;
}