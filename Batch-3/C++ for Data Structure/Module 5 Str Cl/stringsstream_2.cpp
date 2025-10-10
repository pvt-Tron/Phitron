#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    // string s;
    // getline(cin,s);
    // cout<<s<<endl;
    // stringstream ss;
    // string word;
    // ss>>word;
    // cout<<word<<endl;
    
    string s;
    getline(cin,s);
    stringstream ss;
    ss<<s;
    string word;
    int cnt=0;
    while(ss >> word)
    {
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}