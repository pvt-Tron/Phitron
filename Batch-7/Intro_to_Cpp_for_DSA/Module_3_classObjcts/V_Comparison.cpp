#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b     ;
    char s;
    cin >> a >> s >> b;
    int flag = 0;
    if(s == '>' && a > b) flag = 1;
    else if(s == '<' && a < b) flag = 1;
    else if(s == '=' && a == b ) flag = 1;
    if(flag) cout << "Right";
    else cout << "Wrong";
    return 0;
}