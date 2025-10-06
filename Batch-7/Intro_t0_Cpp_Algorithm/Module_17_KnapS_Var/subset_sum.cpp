#include<bits/stdc++.h>
using namespace std;
int val[100005];

bool subset_sum(int i, int sum){
    if(i < 0){
        if(sum == 0) return true;
        return false;
    }
    if(val[i]  <= sum){    
        bool op1 = subset_sum(i-1, sum - val[i]);
        bool op2 = subset_sum(i-1, sum);
        return op1 || op2;
    }
    else return subset_sum(i-1, sum);
}

int main()
{
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
        if(subset_sum(n-1, sum)) 
            cout << "YES";
        else 
            cout << "NO";
        if(t > 0) cout << endl;
    }
    return 0;
}