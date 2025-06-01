#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i += 1){
        cin >> ar[i];
    }
    int max2 = ar[0];
    int max1 = 0;
    for(int i = 0; i < n - 1; i += 1){
        max1 = max(ar[i], ar[i + 1]);
        if(max2 < max1) max2 = max1;
    }
    cout << max2;

    return 0;
}