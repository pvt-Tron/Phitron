#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n1;
    cin >> n1;
    int ar1, ar2;
    for(int i = 0; i < n1; i++){
        cin >> ar1;
        if(i == 0){
            ar2 = ar1;
            continue;
            }
        if(max(ar1, ar2) == ar2){continue;}
        else{ar2 = ar1;}
    }
    cout << ar2 << endl;
    return 0;
}