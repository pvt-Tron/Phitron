#include<bits/stdc++.h>
using namespace std;
void reference(string & ref)
{
    ref="world";
}
int main()
{
    // string constructor
    // string s(a,rb);
    string s(26,'A');
    cout<<s<<endl;

    // sort()
    string s1;
    cin>>s1;
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    
    // reference void reference(string & s)  <<<<<
    string s3="hello";
    reference(s3);
    cout<<s3<<endl;

    // ranged based string loop
    string srb;
    cin>>srb;
    for(int i=0;i<srb.size();i++)
    {
        cout<<srb[i]<<" ";
    }
    cout<<endl;
    for(char crb:srb)
    {
        cout<<crb<<"-";
    }

    return 0;
}