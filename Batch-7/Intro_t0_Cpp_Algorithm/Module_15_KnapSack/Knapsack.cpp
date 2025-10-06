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

int main(){
    int n, mx_weight;
    cin >> n >> mx_weight;
    for(int i = 0; i < n; i += 1){

        cin >> weight[i];
        cin >> val[i];
    }
    cout << knapsack(n - 1, mx_weight) << endl;

    return 0;
}



// Knapsack Implementation II // O(2^N)
#include <bits/stdc++.h>
using namespace std;
int val[1005], weight[1005];

int knapsack(int i, int mx_weight){

    if(i < 0 || mx_weight <= 0) return 0;

    if(weight[i] <= mx_weight){
        // 2 option
        // 1st. I will put it in the bag,
        // 2nd. I will not put it in the bag
        int op1 = knapsack(i - 1, mx_weight - weight[i]) + val[i];
        int op2 = knapsack(i - 1, mx_weight);
        return max(op1,op2);
    }
    else return knapsack(i - 1, mx_weight); // O(2^N)
    //    ^^^ 1 option: Can I get a bag?
}

int main(){
    int n, mx_weight;
    cin >> n >> mx_weight;
    for(int i = 0; i < n; i += 1){

        cin >> weight[i];
        cin >> val[i];
    }
    cout << knapsack(n - 1, mx_weight) << endl;

    return 0;
}


// Knapsack Implementation I // Explicative
#include <bits/stdc++.h>
using namespace std;
int val[1005], weight[1005];

int knapsack(int i, int mx_weight){
    // 2 option
    // 1. I will put it in the bag,
    // 2. I will not put it in the bag
    int op1 = knapsack(i - 1, mx_weight - weight[i]);
    int op2 = knapsack(i - 1, mx_weight);
    return max(op1,op2);
}

int main(){
    int n, mx_weight;
    cin >> n >> mx_weight;
    for(int i = 0; i < n; i += 1){

        cin >> weight[i];
        cin >> val[i];
    }
    cout << knapsack(n - 1, mx_weight) << endl;

    return 0;
}
