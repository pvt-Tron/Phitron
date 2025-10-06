int maxMoneyLooted(vector<int> &houses, int n){
// https://www.naukri.com/code360/problems/loot-houses_630510
    if(n == 0) return 0;
    vector<int> res(n);

    res[0] = houses[0];
    for(int i = 1; i < n; i += 1){
        if(i == 1){
            res[i] = max(houses[i], houses[0]);
        }
        int op1 = houses[i] + res[i - 2];
        int op2 = res[i - 1];
        res[i] = max(op1, op2);
    }
    return res[n-1];
}
int maxMoneyLooted(vector<int> &houses, int n){

    if(n == 0) return 0;

    for(int i = 1; i < n; i += 1){
        if(i == 1){
            houses[i] = max(houses[i], houses[0]);
        }
        int op1 = houses[i] + houses[i - 2];
        int op2 = houses[i - 1];
        houses[i] = max(op1, op2);
    }
    return houses[n-1];
}

// --------------------------------------------
#include <bits/stdc++.h>
// #defines
#define fastIO() ios_base::sync_with_stdio.cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif ONLINE_JUDGE

// globals
void recur(int n){
    if(n <  1) return;
    cout << n << " ";
    recur(n-1);
//    cout << n << " ";
    return;
}
int main(){

    fastIO();
    int n;
    cin >> n;

    return 0;
}

// Problem Link // "House robber" bottom_Up
// https://www.naukri.com/code360/problems/loot-houses_630510?leftPanelTabValue=PROBLEM

int maxMoneyLooted(vector<int> &houses, int n)
{
	if (n==0) return 0;
	vector<int> res(n);

	res[0] = houses[0];
	for(int i=1; i<n; i++) {
		if (i==1) {
			res[i] = max(houses[1], houses[0]);
		}
		int op1 = houses[i] + res[i-2];
		int op2 = res[i-1];
		res[i] = max(op1, op2);
	}

	return res[n-1];


}

// Problem Link // "House robber" bottom_Up Space Optimized
// https://www.naukri.com/code360/problems/loot-houses_630510?leftPanelTabValue=PROBLEM

int maxMoneyLooted(vector<int> &houses, int n)
{
	if (n==0) return 0;

	for(int i=1; i<n; i++) {
		if (i==1) {
			houses[i] = max(houses[1], houses[0]);
		}
		int op1 = houses[i] + houses[i-2];
		int op2 = houses[i-1];
		houses[i] = max(op1, op2);
	}
	return houses[n-1];
}

// Problem Link // "House robber" Top Down
// https://www.naukri.com/code360/problems/loot-houses_630510?leftPanelTabValue=PROBLEM

vector<int> dp(1e5+5, -1);

int recur(int idx, vector<int> &houses)
{
	if (idx < 0) return 0;

	if (dp[idx] != -1) return dp[idx];

	int op1 = houses[idx] + recur(idx-2, houses);
	int op2 = recur(idx-1, houses);

	return dp[idx] = max(op1, op2);

}

int maxMoneyLooted(vector<int> &houses, int n)
{

	return recur(n-1, houses);
}

// Recursion
#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif

void recur(int n)
{
    if (n < 1) return;
    cout<<n<<" ";
    recur(n-1);
}
int main()
{
    fastIO();
    int n;
    cin>>n;

    recur(n);

    return 0;
}
