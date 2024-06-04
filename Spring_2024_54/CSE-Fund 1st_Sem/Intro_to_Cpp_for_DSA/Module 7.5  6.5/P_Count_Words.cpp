#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    bool inside_word = false;
    int cnt;
    cnt = 0;
    // cout<<isalpha('.')<<endl;
    for (char c:s)
    {
        if (isalpha(c))
        {
            if (inside_word==false)
            {
                cnt++;
                // cout << c << endl;
            }
            inside_word = true;
        }
        else
        {
            inside_word = false;
        }
    }
    cout << cnt << endl;
    return 0;
}