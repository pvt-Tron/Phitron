#include<iostream>
#include<iomanip>
using namespace std;
int my_min(int a,int b)
{
    if(a<b) return a;
    else return b;
}
int my_max(int a,int b)
{
    if(a>b) return a;
    else return b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int mn=my_min(a,b);
    int mx=my_max(a,b);
    cout<<mn<<" "<<mx<<endl;

    return 0;
}