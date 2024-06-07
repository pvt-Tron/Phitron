#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    while(t--){
        long int n = 0;
        cin >> n;
        if(n%2 != 0){
            cout << "-1";
        }
        else{
                long int ar1[n];
                int cnt = 0;
                i = 0;
                for(i = 0; i < n; i++){
                    cin >> ar1[i];
                }
                i = 0;
                for(i = 0; i < n; i++){
                    if(ar1[i]%2 != 0){
                        cnt = cnt + 1;
                    }
            }
            cnt = abs((n / 2) - cnt);
            cout << cnt;
            free(ar1);
            cnt = 0;
        }
        n = 0;
        if(t > 0) cout << endl;
    }
    return 0;
}

//#help
//this is a a problem I partialy solved, but I was interested to solve wit a dynamic counter (here in code below `` *cnt ``), but my code fail, there is someone that see the error, (if I use int cnt [= normal int] the code has green result, but then I have an error on 2nd test in submission at CF (G Even Hate Odd) case an n odd number was not skipped