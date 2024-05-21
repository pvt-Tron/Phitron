#include<bits/stdc++.h>

#include<algorithm>
using namespace std;
int main()
{
    int ar1, ar2, ar3;
    int min1 = 0, max1 = 0;
    cin >> ar1 >> ar2 >> ar3;
    max1 = max(ar1, ar2);
    max1 = max(max1, ar3);
    min1 = min(ar1, ar2);
    min1 = min(min1, ar3);
    
    cout << min1 << " " << max1 << endl;

    return 0;
}