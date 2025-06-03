#include<bits/stdc++.h>
using namespace std;
int main()
{ // string st1 itereator it; ??
    string st1;
    cout << *st1.begin() << " "; 
    cout << *st1.end() << " ";

    for(string::iterator it = st1.begin(); it < st1.end(); it += 1){
        cout << *it << endl;
    }

    for(auto it = st1.begin(); it < st1.end(); it += 1){
        cout << *it << endl;
    }
    // Input
    string st2;
    cin >> st2;
    // cin.getline(s, 100); // char s[100]
    getline(cin, st1); // 

    return 0;
}