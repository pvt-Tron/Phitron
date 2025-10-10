#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    vector<int> v1;
    // cout<<v1.max_size()<<endl;
    // cout<<v1.capacity()<<endl;
    v1.push_back(10);
    // cout<<v1.capacity()<<endl;
    v1.push_back(20);
    // cout<<v1.capacity()<<endl;
    v1.push_back(30);
    // cout<<v1.capacity()<<endl;
    v1.push_back(40);
    v1.push_back(50);
    // v1.clear();
    v1.resize(2);
    v1.resize(7,100);
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    // cout<<v1[4]<<endl;
    return 0;
}
