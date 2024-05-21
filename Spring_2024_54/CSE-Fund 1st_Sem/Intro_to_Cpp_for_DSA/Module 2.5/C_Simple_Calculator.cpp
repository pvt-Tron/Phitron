#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, y, sum1, pro1, div1;
    cin >> x >> y;
    sum1 = x + y;
    pro1 = x * y;
    div1 = x - y;

    cout << x << " " << "+" << " " << y << " " << "=" << " " << sum1 << endl;
    cout << x << " " << "*" << " " << y << " " << "=" << " " << pro1 << endl;
    cout << x << " " << "-" << " " << y << " " << "=" << " " << div1 << endl;

    return 0;
}