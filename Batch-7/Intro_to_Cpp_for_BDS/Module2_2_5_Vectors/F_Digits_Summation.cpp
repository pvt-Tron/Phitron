#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin >> n >> m;
    if(n >= 10) n = n%10;
    if(m >= 10) m = m%10;
    cout << fixed << (long long) n + m;
    return 0;
}