#include<iostream>
#include<iomanip>
#include<utility>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    // cin>>s;
    cin.getline(s,100);
    // fgets(s,100,stdin);
    cout<<strlen(s)<<endl;
    cout<<s<<endl;
    return 0;
}