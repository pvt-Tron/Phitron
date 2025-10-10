#include <bits/stdc++.h>
//#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int frq[26] = {0};
    for(char c: s){
        cout << frq[c - 'a'] << " ";
        // cout << c << endl;
        frq[c - 'a']++;
    }
    for (char i1 = 'a'; i1 <= 'z';i1++){
        
        // cout<< i1 <<  " - " << frq[i1 - 'a'] << endl;
        // cout << i1 << " - " << " " << endl;
        for (int j = 0; j < frq[i1 - 'a']; j++)
        {
            cout << i1 << " ";
        }
    }


    return 0;
}