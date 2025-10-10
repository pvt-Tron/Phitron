// Dyunamic Programming Intro. // Fibonacci

function fn(n) {
  if(n < 0) return 1;
  return fn(n-1)+fn(n-2)
}


#include <bits/stdc++.h>
 #define ll long long
using namespace std;
const ll N = 1e6 + 5;
ll dp[N];
ll fibo(ll n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
 ll years = fibo(n - 1) + fibo(n - 2);
    dp[n] = years;
    return years;
}
int main()
{
    ll n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
 cost << FIBO(n) << endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    a[0] = 0;
    a[1] = 1;
 O(N)
    for (int i = 2; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
 cost << a[n] << endl;
    return 0;
}
