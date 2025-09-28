#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s="Hello";
    string s2;
    cin>>s2;
    cout<<s2<<endl;

    cout<<s.size()<<endl;       //s.size()  1
    cout<<s.max_size()<<endl;   //s.max_size() 2
    string a="jdfsgjdgádjgadvjdvjsdggasdg";
    
    cout<<a.capacity()<<endl;   //.capacity() 3
    a="hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
    
    if(s.empty()==true) cout<<"Empty"<<endl; //.empty() 4
    else cout<<"Not Empty"<<endl;
    
    // s2 5 6 7
    cout<<s2<<endl;
    cout<<s2.size()<<endl;
    s2.resize(5);
    cout<<s2.size()<<endl;       //.resize() 8 9 10
    s2.resize(20,'X');
    cout<<s2.size()<<endl;
    s2.resize(5);
    cout<<s2<<endl;
    s.clear();                  //.clear() 11 12 13
    a.clear();
    s2.clear();
    cout<<"cleared %s?"<<s<<" clear"<<endl;
    cout<<"cleared %s?"<<a<<" clear"<<endl;
    cout<<"cleared %s?"<<s2<<" clear"<<endl;
// 14 <<endl
    return 0;
}