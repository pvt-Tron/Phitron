#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<utility>
#include<algorithm>
using namespace std;
int* fun()
{
    int * a=new int [5];
    // int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    return a;
}

int main()
{
    int *a=fun();
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // delete[] a;
    return 0;
}