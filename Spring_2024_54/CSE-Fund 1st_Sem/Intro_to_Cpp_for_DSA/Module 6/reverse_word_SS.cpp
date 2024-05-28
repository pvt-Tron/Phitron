#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
using namespace std;

void print(string & s){
    s = "Hallo!";
}
//--------- Reverse Word print 
void printSS(stringstream& ss){  //<---------
    string word;
    if(ss >> word){
        printSS(ss);   //<--------- Reverse
        cout<<word<<endl;
        //printSS(ss);  //<--------- Normal (Not Reverse)
    }
}

int main()
{   
    string a="Hello world";;
    // cin >> a;
    string s(a, 7);
    sort(s.begin(),s.end());

    for(char c:s){
    cout << c << endl; 
    }
    print(s);
    cout << s << endl;
    
    // string word;
    getline(cin,s);
    stringstream ss(s);  //<---------
    
    // if(ss >> word){
    //     cout<<word<<endl;
    // }
    printSS(ss);

    return 0;
}