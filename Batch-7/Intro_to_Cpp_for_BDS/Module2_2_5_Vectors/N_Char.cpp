#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if(a >='a' && a <='z'){
        char res = a - 32;
        cout << res;
    }
    else{
        char res = a + 32;
        cout << res;
    }
    return 0;
}