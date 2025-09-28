#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    int even;
    int odd;
    cin>>t;
    int out[t];
    for(int h=0;h<t;h++)
    {
        cin>>n;
        int a[n];
        odd=0;
        even=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even++;
            }
        }
        if(n%2!=0)
        {
            out[t]=-1;
            continue;
        }
        else if((n/2)==even)
        {
            out[t]=0;
        }
        else if((n/2)>even)
        {
            odd=even-n;
            out[t]=even-odd;
        }
        else
        {
            odd=n-even;
            out[t]=odd-even;
        }
    }
    for(int i=0;i<t;i++)
    {
        cout<<out[i]<<endl;
    }   
    return 0;
}