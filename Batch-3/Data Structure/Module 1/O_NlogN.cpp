#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
                     // O(N log(N))
    int n;
    cin>>n;
    for(int i=1;i<=n;i=i++) //O(N)
    {
        int x=i;
        while(x>0) //O(log(N))
        {
            int digit=x%10;
            cout<<digit<<" ";
            x/=10;
        }
        cout<<endl;          
    }
    return 0;
}