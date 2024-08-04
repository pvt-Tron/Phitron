#include<bits/stdc++.h>
using namespace std;
bool backspaceCompare(string s, string t){
    stack<char> s1, s2;
    for(char c : s){
        if(c == '#'){
            if(!s1.empty()) s1.pop();
        }
        else s1.push(c);
    }
    for(char c : t){
        if(c == '#'){
            if(!s2.empty()) s2.pop();
        }
        else s2.push(c);
    }
    return (s1 == s2);
}
int main()
{
    string snpt1, snpt2;
    cin >> snpt1 >> snpt2;
    int res1 = backspaceCompare(snpt1, snpt2);
    if(res1) cout << "Yes";
    else cout << "No";
    cout << endl;

    return 0;
}
    