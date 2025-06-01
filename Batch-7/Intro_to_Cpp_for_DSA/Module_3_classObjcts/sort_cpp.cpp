#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i += 1){
        cin >> ar[i];
    }
    sort(ar, ar + n); //    ascending      sort array !!!!!
    sort(ar, ar + n, greater<int>()); //   descending 
    for(int i = 0; i < n; i += 1){
        cout << ar[i] << " ";
    }

    return 0;
}