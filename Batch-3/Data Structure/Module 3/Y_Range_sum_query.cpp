#include<bits/stdc++.h>
using namespace std;

// int sumlr(int *ar,int n, int x, int y, int i)
// {    
//     if(i<n) return;
//     else
//     {
//     int sumt=sumlr(*ar[i])
    
//     return sumt;

// }
int main()
{
    long long n,q;
    cin>>n>>q;
    long long a[n]; //,b[n];
    long long x;
    for(int i=0;i<n;i++)
    {
        x=0;
        cin>>x;
        // b[i]=x;
        if(i==0){a[i]=x;}
        else{a[i]=a[i-1]+x;}
    }
    // int l[q],r[q];
    // for(int j=1;j<=q;j++) cin>>l[j]>>r[j];
    // int i,j;
    // int tot=0;
    long long sum=0;
    int l,r;
    while(q--)
    {
        cin>>l>>r;
        l--;
        r--;
        if(l>0){sum=a[r]-a[l-1];}
        else{sum=a[r];}
        cout<<sum<<endl;        
    }
    // for(j=1;j<=q;j++)
    // {
    //     for(i=l[j]-1;i<r[j];i++) tot=tot+a[i];
    //     cout<<tot<<endl;
    //     tot=0;
    // }
    return 0;
}