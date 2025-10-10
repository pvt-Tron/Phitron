#include<bits/stdc++.h>   
using namespace std;
int main()
{
    // vector<int> v; //    <- 1st type
    int n;
    cin>>n;
    vector<int> v(n); //    <- 2nd type
    for(int i=0;i<n;i++)
    {
        cin>>v[i];    //    <- 2nd type
        // int x;     //    <- 1st type
        // cin>>x;
        // v.push_back(x);
    }
    for(int val:v)
    {
        cout<<val<<" ";
    }

    return 0;
}