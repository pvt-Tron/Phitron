// AlgoCS2W4 // Last knapsack / Reach Walue /dp/Bot.Up/Top.Dwn/
// Last knapsack
#include <bits/stdc++.h>
using namespace std;
int val[1005], weight[1005];
int dp[1005][1005];

int knapsack(int i, int mx_weight)
{
    if (i < 0 || mx_weight <= 0)
        return 0;

    if (dp[i][mx_weight] != -1)
        return dp[i][mx_weight];

    if (weight[i] <= mx_weight)
    {
        int op1 = knapsack(i - 1, mx_weight - weight[i]) + val[i];
        int op2 = knapsack(i - 1, mx_weight);
        dp[i][mx_weight] = max(op1, op2);
        return dp[i][mx_weight];
    }
    else
    {
        dp[i][mx_weight] = knapsack(i - 1, mx_weight);
        return dp[i][mx_weight];
    }
}

int main()
{
    int n, mx_weight;
    cin >> n;
    cin >> mx_weight;

    for (int i = 0; i < n; i++)
        cin >> weight[i];
    for (int i = 0; i < n; i++)
        cin >> val[i];

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= mx_weight; j++)
            dp[i][j] = -1;

    cout << knapsack(n - 1, mx_weight) << endl;

    return 0;
}


// Conceptual Session 2 W4 // Reach Walue DP
#include <bits/stdc++.h>
using namespace std;

bool rec(long long int n)
{
    // base case
    if (1 == n)
    {
        return true;
    }
    else if (n == 0)
    {
        return false;
    }

    // recursive call
    bool l = false, r = false;
    if (n % 10 == 0)
        l = rec(n / 10);
    if (n % 20 == 0)
        r = rec(n / 20);

    return l || r;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int n;
        cin >> n;
        // cout << rec(1) << endl;
        if (rec(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

// Conceptual Session 2 W4 // Reach Walue Bot.Up

#include <bits/stdc++.h>
using namespace std;

long long int n;
bool rec(long long int val)
{
    // base case
    if (val == n)
    {
        return true;
    }
    else if (val > n)
    {
        return false;
    }

    // recursive call
    bool l = rec(val * 10);
    bool r = rec(val * 20);

    return l || r;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        // cout << rec(1) << endl;
        if (rec(1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
// Conceptual Session 2 W4 // Reach Walue Top Down
#include <bits/stdc++.h>
using namespace std;

bool rec(long long int n)
{
    // base case
    if (1 == n)
    {
        return true;
    }
    else if (n == 0)
    {
        return false;
    }

    // recursive call
    bool l = false, r = false;
    if (n % 10 == 0)
        l = rec(n / 10);
    if (n % 20 == 0)
        r = rec(n / 20);

    return l || r;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int n;
        cin >> n;
        // cout << rec(1) << endl;
        if (rec(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
