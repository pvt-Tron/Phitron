// Unbounded Knapsack Bottom Up Approach
#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool subset_sum(int n, int a[], int s)
{
    if (n == 0){
        if (s == 0) return true;
        else return false;
    }
    if (dp[n][s] != -1) return dp[n][s];
    if (a[n - 1] <= s){
        bool op1 = subset_sum(n - 1, a, s - a[n - 1]);
        bool op2 = subset_sum(n - 1, a, s);
        return dp[n][s] = op1 || op2;
    }
    else
        return dp[n][s] = subset_sum(n - 1, a, s);
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int s;
    cin >> s;
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= s; j++)
            dp[i][j] = -1;

    if (subset_sum(n, a, s)) cout << "YES" << endl;

    else cout << "NO" << endl;

    return 0;
}
int main(){
    int n, s;
    cin >> n >> s;
    int val[n], w[n];
    int dp[n + 1][s + 1];
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= s; j++)
            if (i == 0 || j == 0) dp[i][j] = 0;
    
    for (int i = 0; i < n; i++) cin >> val[i];
    for (int i = 0; i < n; i++) cin >> w[i];
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= s; j++){
            if (w[i - 1] <= j){
                int op1 = dp[i][j - weight[i - 1]] + value[i - 1];
                int op2 = dp[i - 1][j];
                dp[i][j] = max(op1, op2);
            }
            else dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][s] << endl;
    return 0;
}