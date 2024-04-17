#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string a="Hello";
    // string b="world";

    // a+=b;
    // a.append(b);
    // cout<<a<<endl;
    // cout<<b<<endl;
    //a[5]='A'; //didn't work
    // a=a+'A';
    // a.push_back('A');
    // cout<<a<<endl;
    // a.pop_back();
    // a.pop_back();
    // cout<<a<<endl;
    string a="HelloWorld";
    // a.erase(4,3);
    a.replace(4,3,"so");
    a.insert(4,"so"); // a.replace(4,0,"so");
    cout<<a<<endl;

    return 0;
}