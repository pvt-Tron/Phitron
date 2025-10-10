#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n1;
    cin >> n1;
    string s;
    getchar();
    getline(cin, s);
    sort(s.begin(), s.end());
    cout << s << endl;
    return 0;
}