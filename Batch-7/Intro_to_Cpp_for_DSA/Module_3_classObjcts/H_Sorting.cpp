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
    int max = ar[0];
    for(int i = 0; i < n - 1; i += 1){
        for(int j = i + 1; j < n; j += 1){
            if(ar[i] > ar[j]){
                // max = ar[j];
                swap(ar[i], ar[j]);
            }
        }
    }
    for(int i = 0; i < n; i += 1){
        cout << ar[i] << " ";
    }
    
    return 0;
}