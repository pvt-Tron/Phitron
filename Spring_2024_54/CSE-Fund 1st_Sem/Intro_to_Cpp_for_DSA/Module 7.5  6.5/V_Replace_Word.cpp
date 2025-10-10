#include<bits/stdc++.h>
// #include<cstring>
using namespace std;


int main()
{
    //char c = ' ';
    //int i = 0;
    string s;   
    getline(cin, s);
    int t = s.length();
    while(t--){
        if(s[t] == 'T'){if(s[t - 1] == 'P'){if(s[t - 2] == 'Y'){if(s[t - 3] == 'G'){if(s[t - 4] == 'E'){
            s.replace(t - 4, 5, " ", 1);
        }}}}}
    }
    cout << s;
}