#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    // getline(s, 101, stdin);
    cin >> s;
    int anton = 0;
    int danik = 0;

    for(int i = 0; i < n; i += 1){
        if(s[i] == 'D') danik += 1;
        else anton += 1;
    }
    if(anton > danik)cout << "Anton";
    else if (anton < danik) cout << "Danik";
    else cout << "Friendship";
    return 0;
}