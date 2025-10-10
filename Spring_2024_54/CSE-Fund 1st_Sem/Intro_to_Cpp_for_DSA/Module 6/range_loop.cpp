#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
using namespace std;
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

    cout << s << endl;


    return 0;
}
