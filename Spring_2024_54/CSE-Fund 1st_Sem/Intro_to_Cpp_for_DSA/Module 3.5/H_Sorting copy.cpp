#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    cin >> n1;
    int a[1];
    int ar1[n1];
    for(int i = 0; i < n1; i++){
        cin >> ar1[i];
    }

    int i;
    for(int i = 0; i < n1; i++){
        cout << ar1[i];
        if(i < n1 - 1){cout << " ";}
    }
    cout << endl;

    for(i = 0; i < n1 - 1; i++){
        for(int j = i + 1; j < n1; j++){
            a[0] = ar1[i];
            a[1] = ar1[j];
            // cout << j << a[1] << a[1] << " ";
            // sort(a, a + 1);
            // cout  << i << a[1] << a[1] << " ";
            if(ar1[i] > ar1[j]){
                ar1[i] = a[1];
                ar1[j] = a[0];
            }
        }
    }
    for(int i = 0; i < n1; i++){
        cout << ar1[i];
        if(i < n1 - 1){cout << " ";}
    }
    cout << endl;
    
    return 0;
}