#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int min = a;
    int max = a;
    if(c > max) max = c;
    if(c < min) min = c;
    if(b > max) max = b;
    if(b < min) min = b;
    cout << min << " " << max;
    return 0;
}