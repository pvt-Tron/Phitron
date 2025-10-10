#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int ar1, ar2, ar3;
    int i = 0;
    while(cin >> ar1){
        if(i == 0){
            cin >> ar1;
            ar2 = ar1;
            ar3 = ar1;
            i++;
            continue;
            }
        if(max(ar2, ar1) == ar2){continue;}
        else{ar2 = ar1;}
        //cout << ar1 << " ";
        if(min(ar1, ar3) == ar3){continue;}
        else{ar3 = ar1;}
    }    
    cout << ar3 << " " << ar2 << endl;
    return 0;
}