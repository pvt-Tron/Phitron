#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> qrd(n);
    for(int x = 0; x < n; x++){
        cin >> qrd[x];
    }
    while (t--)
    {
        int l, r;
        int result = 0;
        cin >> l >> r;
        for(int i = l - 1; i <= r - 1; i++){
            //cout << qrd[i] << " ";
            result += qrd[i];
        }
        cout << result;
        if (t > 0) cout << endl;
    }
    return 0;
}