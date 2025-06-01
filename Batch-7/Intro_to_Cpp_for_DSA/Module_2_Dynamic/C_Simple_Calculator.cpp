#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    cout << x << " + " << y << " = " << x + y << endl;
    // long multi1 = x * y;
    cout << x << " * " << y << " = " ;
    cout << fixed << (long long) x * y << endl;
    cout << x << " - " << y << " = " << x - y << endl;
    return 0;
}