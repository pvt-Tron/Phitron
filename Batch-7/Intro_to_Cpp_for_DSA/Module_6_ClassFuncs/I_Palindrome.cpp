#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    getline(cin, st);
    string st2 = st;
    reverse(st.begin(), st.end());
    if(st2 == st) cout << "YES";
    else cout << "NO";
    return 0;
}