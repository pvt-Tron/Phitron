#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n;
    int* ar1 = new int[n];
    for(int i = 0; i < n; i += 1) cin >> ar1[i];
    cin >> m;
    int* ar2 = new int[m];
    for(int i = 0; i < n; i += 1) ar2[i] = ar1[i];
    delete[] ar1;
    for(int i = n; i < m; i += 1) cin >> ar2[i];
    for(int i = 0; i < m; i += 1) cout << ar2[i] << " ";
    return 0;
}