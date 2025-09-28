#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n;
    cin>>q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // sort(a, a + n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // int x[q];
    // for(int i=0;i<q;i++) 
    // {
    //     cin>>x[i];
    // }

    while(q--)
    {
        int x;
        cin>>x;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                flag=true;
                break;
            }
        }
        if(flag==true){cout<<"found"<<endl;}
        else{cout<<"not found"<<endl;}
    }
    
    return 0;
}    
    // int i,j,h=0,k=0;
    // int flag=0;
    // for(i=0;i<q;i++)
    // {
    //     // if(n%2==0){j=(n/2);}
    //     // else{j=((n-1)/2)+1;};
    //     j=n/2;
    //     if(a[j]<x[i]){k=j-1;h=0;}
    //     else if(a[j]=x[i]){cout<<"found"<<endl; continue;}
    //     else{k=0;h=h-j;}
    //     // if(j%2==0){j=(j/2);}
    //     // else{j=((j-1)/2)+1;};
    //     // if(a[j]<x[i]){k=j;h=0;}
    //     // else if(a[j]=x[i]){cout<<"found"<<endl; continue;}
    //     // else{k=0;h=h-j;}
    //     for(int v=k;v<=n+h;v++)
    //     {
    //         if(a[v]==x[i])
    //         {
    //             cout<<"found"<<endl;
    //             flag=1;
    //             break;
    //         }
    //     }
    //     if(flag==0) cout<<"not found"<<endl;
    //     flag=0;
    // }