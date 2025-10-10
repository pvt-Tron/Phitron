#include<bits/stdc++.h>
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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> val(n);
        for(int i = 0; i < n; i++){
            cin >> val[i];
        }
        int sum = 0;
        cin >> sum;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                dp[i][j] = -1;
        
        // cout << dp[n][sum] << endl;
        if(subset_sum(n, sum)) 
            cout << "YES";
        else 
            cout << "NO";
        if(t > 0) cout << endl;
    }
    return 0;
}