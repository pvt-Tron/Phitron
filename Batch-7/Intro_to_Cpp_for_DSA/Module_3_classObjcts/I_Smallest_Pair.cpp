#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long ar[n];
        for(int i = 0; i < n; i += 1){
            cin >> ar[i];
        }
        long long minX = INT_MAX;
        for(int i = 0; i < n - 1; i += 1){
            for(int j = i + 1; j < n; j += 1){
                if(ar[i] + ar[j] + j - 1 < minX){
                    minX = ar[i] + ar[j] + j - i;
                }
            }
        }
        cout << (long long)minX << endl;

    }
    
    return 0;
}