#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    int min,max;
    int tmp,tmp2;
    int flag,flag2;
    int e=0,f=n-1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        flag2=0;
        min=a[i];
        max=a[i];
        for(int j=1+e;j<f;j--)
        {
            if(min>a[j])
            {
                min=a[j]; 
                tmp=j;
                flag=1;
            }
            if(max<a[j])
            {
                max=a[j];
                tmp2=j;
                flag2=1;
            }
        }
        if(flag=1)
        {
            a[tmp]=a[i];
        }
        if(flag2=1)
        {
            a[f]=max;
        }
        // e++;
        f--;
        a[i]=min;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}