#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin >> n;
    int ar[n];
    int s = 0;
    for(int i = 0; i < n; i++){  // O(n)
        cin >> ar[i];
    }
    for(int i = 0; i < n; i++){  // O(n) 
    
        s += ar[i];
    }
    cout << s;
    return 0; 
}   // // O(n) + O(n) = O(n+n) = O(2n) ===> O(n) <=== NB
//                                          ^^^^
//                                           ||
// for(int i = 0; i < n / 2; i++) O(log n) <<<<<<<<<<< 