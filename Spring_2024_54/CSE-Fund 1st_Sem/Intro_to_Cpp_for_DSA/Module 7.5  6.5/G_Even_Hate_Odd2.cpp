#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    while(t--){
        int* n = new int;
        cin >> *n;
        cout << *n << " ";
        if(*n%2 != 0){
            cout << "-1";
        }
        else{
                int* ar1 = new int[*n];
                int* cnt = new int;
                cnt = 0;
                i = 0;
                for(i = 0; i < *n; i++){
                    cin >> ar1[i];
                    cout << ar1[i] << " ";
                }
                i = 0;
                for(i = 0; i < *n; i++){
                    cout << ar1[i] << " ";
                    if(ar1[i]%2 != 0){
                        *cnt++;
                    }
            }
            *cnt = abs((*n / 2) - *cnt);
            cout << *cnt;
            delete[] ar1;
            delete cnt;
        }
        delete n;
        if(t > 0) cout << endl;
    }
    return 0;
}