#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int c = 0;
    char sym1;
    cin >> a >> sym1 >> b;
    if(sym1 == '<'){c = a < b;}
    else if(sym1 == '>'){c = a > b;}
    else {c = a == b;}
    if(c){cout << "Right" << endl;}
    else{cout << "Wrong" << endl;}
    return 0;
}