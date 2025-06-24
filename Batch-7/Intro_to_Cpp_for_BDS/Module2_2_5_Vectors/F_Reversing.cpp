#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for(int i = 0; i < n; i += 1){
        cin >> v1[i];
    }
    
    for(auto it = v1.end() - 1; it >= v1.begin(); it -= 1){
        cout << *it << " ";
    }
    return 0;
}