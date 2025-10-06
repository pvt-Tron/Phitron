// Knapsack Implementation III DP // O(NW) // Top-Down
#include <bits/stdc++.h>
using namespace std;
int val[1005], weight[1005];
int dp[1005][1005];
int knapsack(int i, int mx_weight){

    if(i < 0 || mx_weight <= 0) return 0;

    if(dp[i][mx_weight] != -1) return dp[i][mx_weight];

    if(weight[i] <= mx_weight){

        int op1 = knapsack(i - 1, mx_weight - weight[i]) + val[i];
        int op2 = knapsack(i - 1, mx_weight);
        dp[i][mx_weight] = max(op1,op2);
        return dp[i][mx_weight];

    }
    else{
        dp[i][mx_weight] = knapsack(i - 1, mx_weight);
        return dp[i][mx_weight];
    }
}
int main(){
    int n, mx_weight;
    cin >> n >> mx_weight;

    for(int i = 0; i <= n; i += 1){
        for(int j = 0; j <= mx_weight; j += 1){
            dp[i][j] = -1;
        }
    }
    for(int i = 0; i < n; i += 1){

        cin >> weight[i];
        cin >> val[i];
    }
    cout << knapsack(n - 1, mx_weight) << endl;

    return 0;
}


#include <bits/stdc++.h>
using namespace std;
const int maxN = 1000;
const int maxW = 1000;
int dp[maxN][maxW];
int knapsack(int n, int weight[], int value[], int W)
{
    if (n == 0 || W == 0)
        return 0;
    if (dp[n][W] != -1)
    {
        return dp[n][W];
    }
    if (weight[n - 1] <= W)
    {
        // duita option I'll take it, I'll see if I don't.
        int op1 = knapsack(n - 1, weight, value, W - weight[n - 1]) + value[n - 1];
        int op2 = knapsack(n - 1, weight, value, W);
        return dp[n][W] = max(op1, op2);
    }
    else
    {
        // An option You have to see without taking it
        int op2 = knapsack(n - 1, weight, value, W);
        return dp[n][W] = op2;
    }
}
int main()
{
    int n;
    cin >> n;
    int weight[n], value[n];
    for (int i = 0; i < n; i++) cin >> weight[i];
    for (int i = 0; i < n; i++) cin >> value[i];

    int W;
    cin >> W;
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= W; j++) dp[i][j] = -1;
    }
cout << knapsack(n, weight, value, W) << endl;
    return 0;
}

// SubSet Top Down Sum Variant

#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool subset_sum(int n, int a[], int s){
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
    else return dp[n][s] = subset_sum(n - 1, a, s);
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int s;
    cin >> s;
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= s; j++) dp[i][j] = -1;
    }
    if (subset_sum(n, a, s)) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
    return 0;
}
