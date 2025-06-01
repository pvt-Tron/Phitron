#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        // getline(s, 101, stdin);
        cin >> s;
        int n =s.size();
        if(n > 10){
            cout << s[0] << n - 2 << s[n-1];
        }
        else cout << s;
        if(t > 0) cout << endl;
    }
    return 0;
}