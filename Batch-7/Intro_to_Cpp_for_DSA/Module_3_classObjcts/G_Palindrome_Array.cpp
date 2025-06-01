#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long ar[n];
    for(int i = 0; i < n; i += 1){
        cin >> ar[i];
    }
    int j = n-1;
    for(int i = 0; i < n; i += 1){
        if(i >= j) break;
        if(ar[i] != ar[j]){
            cout << "NO";
            return 0;
        }
        j--;
    }
    cout << "YES";
    return 0;
}