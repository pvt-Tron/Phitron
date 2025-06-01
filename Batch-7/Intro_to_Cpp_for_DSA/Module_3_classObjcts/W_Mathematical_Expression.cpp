#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char s, e;
    cin >> a >> s >> b >> e >> c;
    int flag = 0;
    if(s == '*' && a*b == c) flag = 1;
    else if (s == '*' && a*b != c) cout << a*b;
    else if(s == '+' && a+b == c) flag = 1;
    else if (s == '+' && a*b != c) cout << a+b;
    else if(s == '-' && a-b == c) flag = 1;
    else if (s == '-' && a*b != c) cout << a-b;
    if(flag) cout << "Yes";
    // else cout << "No";
    return 0;
}