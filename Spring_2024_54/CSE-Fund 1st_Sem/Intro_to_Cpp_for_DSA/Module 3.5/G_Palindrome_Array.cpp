#include<bits/stdc++.h>
using namespace std;

int is_pall(int *ar2, int n2){
    //int* i = new int;
    int i = 0;
    for(int j = n2 - 1; j >= n2 / 2; j--){
        //cout << ar2[i] << " ";
        if(ar2[i] != ar2[j]){
            //cout << "! " << ar2[i] << ar2[j];
            return 0;
        }
        i++;
    }    
    //delete i;
    return 1;
}
int main()
{
    int n1;
    cin >> n1;
    int ar1[n1];
    for(int i = 0; i < n1; i++){
        cin >> ar1[i]; 
    }
    int res1 = is_pall(ar1, n1);
    if(res1){cout << "YES";}
    else{cout << " NO";}

    return 0;
}