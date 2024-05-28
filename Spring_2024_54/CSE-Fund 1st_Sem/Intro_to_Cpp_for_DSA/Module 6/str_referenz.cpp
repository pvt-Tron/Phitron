#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
using namespace std;

void print(string & s){
    s = "Hallo!";
}

int main()
{   
    string a="Hallo world";;
    // cin >> a;
    string s(a, 7);
    sort(s.begin(),s.end());
//-------------------------- Ranged
    for(char c:s){
    cout << c << endl; //<---------
    }
    print(s);
    cout << s << endl;

    return 0;
}