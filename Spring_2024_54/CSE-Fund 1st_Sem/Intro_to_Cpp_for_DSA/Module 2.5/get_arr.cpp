#include<bits/stdc++.h>
using namespace std;

int *get_array(int n2){
    int* ar1 = new int[n2];
    for(int i = 0; i < n2; i++){
        cin >> *(ar1 + i);
    }
    return ar1;
}

int main()
{
    int n1;
    cin >> n1;
    int* ptr;
    ptr = get_array(n1);
    for(int i = 0; i < n1; i++){
        cout << *(ptr + i);
        if(i < n1 - 1){cout << " ";}
    }
    return 0;
}