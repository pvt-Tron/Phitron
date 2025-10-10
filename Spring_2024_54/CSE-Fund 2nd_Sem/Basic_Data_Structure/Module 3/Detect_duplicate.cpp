#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> v1(t);
    for(int i = 0; i < t; i++){
        cin >> v1[i];
    }
    int i = 1;
    int notfound = 1;
    sort(v1.begin(), v1.end());
    for(auto it = v1.begin(); it < v1.end(); it++){
        if(*it == v1[i]){
            cout << "true";
            notfound = 0;
        }
        i++;
    }
    if(notfound) cout << "false";
    
    return 0;
}