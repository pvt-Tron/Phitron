#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    string s;
    string :: iterator it1;
    cin >> s;

    cout << *s.begin() << endl;
    cout << *(s.end() - 1) << endl;
    cout << *(s.begin() + s.length() - 1) << endl;
    for(string :: iterator it2 = s.begin(); it2 < s.end(); it2++){}
    for(auto it1 = s.begin(); it1 < s.end(); it1++){
        cout << *it1 << endl;
    }
    
    for(char c : s){
        cout << c << " ";
    }

    return 0;
}