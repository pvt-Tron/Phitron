#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;
int main()
{
    string s;
    char a;
    int n1;
    cin >> n1 >> a;
    cin.ignore();
    getchar();
    // cin >> s;
    getline(cin, s);
    a = getchar();
    s.push_back(a);
    cout << s.size() << "<s ";
    cout << s.max_size() << "<ms ";
    cout << s.capacity() << "<c ";

    for (char c : s)
    {
        cout << c << " ";
    }

    return 0;
}