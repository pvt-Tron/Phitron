#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for(int i = 0; i < n; i += 1){
        cin >> v1[i];
        if(v1[i] > 0) v1[i] = 1;
        else if(v1[i] < 0) v1[i] = 2;
    }
    
    for(auto it = v1.begin(); it < v1.end(); it += 1){
        cout << *it << " ";
    }
    return 0;
}