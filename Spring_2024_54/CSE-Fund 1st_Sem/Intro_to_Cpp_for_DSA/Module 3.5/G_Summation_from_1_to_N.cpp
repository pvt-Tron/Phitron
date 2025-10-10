#include<bits/stdc++.h>>
using namespace std;
int main()
{
    long long int n1;
    long long int a = 0;
    cin >> n1;
    long long int i = n1;
    a = i*(i+1);
    a /= 2;
    // while(i >= 1){
    //     a += i;
    //     i--;
    // }
    cout << a << endl;
    return 0;
}