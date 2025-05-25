#include<bits/stdc++.h>
using namespace std;
int main()
{
    double nd;
    cin >> nd;
    cout << setprecision(5) << nd << endl; 
    // set number of digits and round last if .xyz
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i += 1){
            cin >> ar[i];
        }
        for(int i = 0; i < n; i += 1){
            cout << ar[i] << " ";
            cout << (char)ar[i] << " ";  // ASCII ex.: a = 97
        } // conversion (...) set data_type to output on stdout
        if(t > 0) cout << endl;
    }
    return 0;
}
/*
12.3456789
2
5
65 66 70 81 87
6
97 121 100 99 110 101
*/