#include<bits/stdc++.h>
using namespace std;

int* get_array(int n){
    int* ar = new int[n];
    for(int i = 0; i < n; i += 1){
        cin >> ar[i];
    }
    return ar;
}
int main()
{
    int n;
    cin >> n;
    int* ar = new int[n];
    ar = get_array(n);
    for(int i = 0; i < n; i += 1){
        cout << ar[i] << " ";
    }

    return 0;
}