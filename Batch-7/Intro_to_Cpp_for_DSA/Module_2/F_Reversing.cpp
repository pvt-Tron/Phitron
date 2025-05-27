#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i += 1){
        cin >> ar[i];
    }
    int j = n - 1;
    for(int i = 0; i < n; i += 1){
        if(i >= j) break;
        swap(ar[i], ar[j]);
        j--;
    }
    for(int i = 0; i < n; i += 1){
        cout << ar[i] << " ";
    }

    return 0;
}