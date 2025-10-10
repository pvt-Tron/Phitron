#include<bits/stdc++.h>

using namespace std;
int main()
{
    string elem;
    cin>>elem;
    cout<<elem[0]<<endl;
    cout<<elem.at(0)<<endl;
    cout<<elem[elem.size()-1]<<endl;
    cout<<elem.back()<<endl;
    cout<<elem.front()<<endl;

    return 0;
}