// Equal Sum Partition
#include <bits/stdc++.h>
using namespace std;
int val[100005];
bool dp[1005][1005];
bool subset_sum(int i, int sum){ // O(n*sum)
    if(i < 0){ 
        if(sum == 0) return true;
        return false;
    }
    
    if(dp[i][sum] != -1) return dp[i][sum];

    if(val[i]  <= sum){    
        bool op1 = subset_sum(i-1, sum - val[i]);
        bool op2 = subset_sum(i-1, sum);
        dp[i][sum] = op1 || op2;
        return dp[i][sum];
    }
    else{
        dp[i][sum] = subset_sum(i-1, sum);
        return dp[i][sum];
    }
}
int main(){
    int n;
    cin >> n;
    int esp = 0;
    for (int i = 0; i < n; i++){
        cin >> val[i];
        esp += val[i];
    }
    if (esp%2 == 1) cout << "NO" << endl;
    else{

        // memset(dp, false, sizeof(dp));
        for(int i = 0; i <= n; i++)
            for(int j = 0; j <= esp; j++)
                dp[i][j] = -1;
        
        int eSumPart = esp / 2;
        if (subset_sum(n, eSumPart))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}