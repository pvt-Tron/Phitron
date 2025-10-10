#include <bits/stdc++.h>
using namespace std;
int main()
{    
    int n1;
    cin >> n1;
    vector<string> v1(n1);
    for (int i = 0; i < n1; i++)
    {
        string s;
        getline(cin,v1[i]);

        // cin >> s;
        // v1.push_back(s);
    }
    for(string val:v1){
        cout << val << " ";
    }
    
    cout << endl;
    cout << v1.size() << endl;
    return 0;
}