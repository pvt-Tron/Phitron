#include <bits/stdc++.h>
using namespace std;
int lcs(string a, int n, string b, int m){
    
    if (n == 0 || m == 0) return 0;
    
    if (a[n - 1] == b[m - 1])
        return 1 + lcs(a, n - 1, b, m - 1);
    else
        return max(lcs(a, n - 1, b, m), lcs(a, n, b, m - 1));
    // else{
    //     int op1 = lcs(i-1, j);
    //     int op2 = lcs(i, j-1);
    //     return max(op1, op2);
    //}
}
int main()
{
    string a, b;
    cin >> a >> b;
    
    int n = a.size(), m = b.size();

    cout << lcs(a, n, b, m) << endl;
    return 0;
}