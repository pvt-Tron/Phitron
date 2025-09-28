#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    // cout<<s<<endl;
    stringstream ss;
    string word;
    // while(ss >> word)
    ss>>word;
    cout<<word<<endl;
    while(ss >> word)
    {
        cout<<word<<endl;
    }
    
    return 0;
}