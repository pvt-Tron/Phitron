#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    cin >> v1[0];
    cout << 0 << " ";
    int out1 = 0;
    for(int i = 1; i < n; i++){
        cin >> v1[i];
        out1 += v1[i - 1];
        cout << out1 << " ";
    }
    return 0;
}