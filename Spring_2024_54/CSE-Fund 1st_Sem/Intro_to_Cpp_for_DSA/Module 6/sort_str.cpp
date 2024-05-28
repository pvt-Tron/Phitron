#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{   
    string a="Hello world";;
    
    cin >> a;
    
    string s(a, 7);

    sort(s.begin(),s.end());
    
    cout << s << endl;


    return 0;
}