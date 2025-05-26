#include<bits/stdc++.h>
// #include<iostream>
// #include<iomanip>
using namespace std;
int main()
{
    double nd;
    cin >> nd;
    // cout << nd << endl; 
    // #include<iomanip.h>
    // Set Precision setprecision(n)
    // cout << fixed << setprecision(5) << nd << endl;
    // cout << setprecision(5) << nd << endl;
    // // set number of digits and round last if .xyz // fixed set decimal number
    // // also cout.precision(n)
    cout.precision(5);
    cout << "prova " << fixed << nd << endl; //it need a text before (?)
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ar[n];
        int j = 0;
        for(int i = 0; i < n; i += 1){
            cin >> ar[i];
        }
        // // cin >>> EOF
        // while(cin >> ar[j]) // if I use this I get a strange output
        // {
        //     j += 1;
        // }
        
        for(int i = 0; i < n; i += 1){   // ASCII ex.: a = 97
            (ar[i]%2 == 0) ? cout << ar[i] << "ev " : cout << ar[i] << "od " << (char)ar[i] << " ";
            if(i > 0 && i%2 == 0) cout << "i = " << i << endl;
        } // conversion (...) set data_type to output on stdout
        if(t > 0) cout << "---- next t ----" << endl;
    }
    return 0;
}
/*
input for EOF Error
2
5
65 66 70 81 87
6
97 121 100 99 110 101

12.345678
2
5
65 66 70 81 87
6
97 121 100 99 110 101
*/