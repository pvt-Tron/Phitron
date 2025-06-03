#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 1; i <= 3 ;  i += 1){
                sum2 += k%10;
                k /= 10; 
            }
        for(int i = 1; i <= 3 ;  i += 1){
            sum1 += k%10;
            k /= 10;
        }
        if(sum1 == sum2) cout << "YES";
        else cout << "NO";
        if(t > 0) cout << endl;
    }
    return 0;
}