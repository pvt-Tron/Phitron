#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
using namespace std;

void print(string & s){
    s = "Hallo!";
}

void printSS(stringstream& ss){
    string word;
    if(ss >> word){
        cout<<word<<endl;
        printSS(ss);
    }
}

int main()
{   
    string a="Hello world";;
    // cin >> a;
    string s(a, 7);
    sort(s.begin(),s.end());
//-------------------------- Ranged
    for(char c:s){
    cout << c << endl; //<---------
    }
    print(s);
    cout << s << endl;
    getline(cin,s);
    stringstream ss(s);
    printSS(ss);

    return 0;
}
// def "<<" inline std::ostream &std::operator<<<std::char_traits<char>>(std::ostream &__out, char __c)