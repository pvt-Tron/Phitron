#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string st;
        getline(cin, st);
        stringstream ss(st);
        string word;
        while(ss >> word){
            reverse(word.begin(), word.end());
            cout << word << " ";
        }
        
        
        if(t > 0) cout << endl;
    }
    return 0;
}