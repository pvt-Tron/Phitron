#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=sqrt(n);i++) // O(sqrt(N))
    {
        if(n%i==0)
        {
            // cout<<i<<endl;
            // cout<<i<<" "<<n/i<<endl;
            cout<<i<<" ";
            if(n/i != i) cout<<n/i<<endl;
        }

    }
    return 0;
}