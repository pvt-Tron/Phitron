#include<bits/stdc++.h>
#include<utility>
using namespace std;
int main()
{
    int n1,i;
    cin >> n1;
    int ar1[n1];
    i = 0;
    while(cin >> ar1[i]){i++;}

    for(i = 0; i < n1 -1; i++){
        for(int j = i; j < n1; j++){
            if(ar1[i] > ar1[j]){swap(ar1[i], ar1[j]);}
        }    
    }
    for(i = 0; i < n1; i++){cout << ar1[i] << " ";}
    cout << endl;
    return 0;
}