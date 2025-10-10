#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int weight[n], value[n];
    for (int i = 0; i < n; i++){
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++){
        cin >> value[i];
    }
    int W;
    cin >> W;
    int dp[n + 1][W + 1];
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= W; j++){
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= W; j++){
            if (weight[i - 1] <= j){

                int op1 = dp[i - 1][j - weight[i - 1]] + value[i - 1];
                int op2 = dp[i - 1][j];
                dp[i][j] = max(op1, op2);
            }
            else{
                int op2 = dp[i - 1][j];
                dp[i][j] = op2;
            }
        }
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= W; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << dp[n][W] << endl;
    return 0;
}


// SubSet Bottom Up Sum Variant

// Some code
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int s;
    cin >> s;
    bool dp[n + 1][s + 1];
    dp[0][0] = true;
    for (int i = 1; i <= s; i++) dp[0][i] = false;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= s; j++){
            if (a[i - 1] <= j) dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
            else dp[i][j] = dp[i - 1][j];
        }
    }
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= s; j++){
            if (dp[i][j]) count << "T";
            else count << "F";
        }
        count << endl;
    }
     if (dp[n][s]) count << "YES" << endl;
    else count << "NO" << endl;
    return 0;
}
