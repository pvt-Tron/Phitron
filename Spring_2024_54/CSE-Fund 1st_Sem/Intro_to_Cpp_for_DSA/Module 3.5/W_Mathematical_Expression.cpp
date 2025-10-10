#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, r;
    int c = 0;
    char sym1, q;
    cin >> a >> sym1 >> b >> q >> r;
    if (sym1 == '+')
    {
        c = a + b;
    }
    else if (sym1 == '-')
    {
        c = a - b;
    }
    else
    {
        c = a * b;
    }
    if(c == r){cout << "Yes" << endl;}
    else{cout << c << endl;}

    return 0;
}