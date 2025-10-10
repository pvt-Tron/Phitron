// Dyunamic Programming Intro. > Factorial >> Fibonacci

#include <bits/stdc++.h>
using namespace std;
void rec1(int n){
    if(n > 5) return;
    rec(n + 1);
    cout << n << " ";
}
int rec2(int n){
    if(n > 5) return 0;
    int sum = rec(n + 1);
    return sum + n;
}
int fact(int n){  // Factorial with Recursion

    if(n == 1) return 1;
    // int mul = fact(n - 1);
    // return n * mul;
    return n * fact(n - 1);
}
int main(){

    rec1(1);
    cout << endl;
    int r2 = rec2(1);
    cout << r2 << endl; // 15 O(N)

    int fct = fact(5); // 120 << Factorial of 5
    cout << fct << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
// function fn(n){
int fibon(int n){  //  Fibonacci with Recursion Basic

//    if(n == 0) return 0;
//    if(n == 1) return 1;
//    if(n == 1 || n == 0) return n;
//    if(n < 2) return n; // << 42 1900+ms

    if ( n < 0 ) return 1; //  Memoization

    return fibon( n - 1 ) + fibon( n - 2 ); //  O(2^N)  //
}
int main(){
    int fb = fibon(10);
    cout << fb << endl; //  O(2^N)  //
    return 0;
}

#include <bits/stdc++.h>
using namespace std; // O(N) //  Fibonacci with Recursion with DP
long long int dp[100005];
int fibo(int n){

    if (n < 4) return n;

    if (dp[n] != -1) return dp[n];

    dp[n] = fibo(n - 1) + fibo(n - 2) + fibo(n - 3) + fibo(n - 4);

    return dp[n];
}
int main(){
    memset(dp, -1, sizeof(dp));
    long long int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}

#include <bits/stdc++.h> // O(N) //  Fibonacci Bottom Up
using namespace std;
int main()
{
    int n;
    cin >> n;
    int fibo[n + 1];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= n; i++){

        fibo[i] = fibo[i - 1] + fibo[i - 2];

    }
    cout << fibo[n] << endl;
    return 0;
}



#include <bits/stdc++.h> // O(N) //  Fibonacci Recursion with DP
#define ll long long             // gitbook
using namespace std;
const ll N = 1e6 + 5;
ll dp[N]; // int dp[1005];
ll fibo(ll n){
    if (n == 0 || n == 1) return n;

    if (dp[n] != -1) return dp[n];

 ll years = fibo(n - 1) + fibo(n - 2);
    dp[n] = years;
    return years;
}
int main(){
    ll n;
    cin >> n;
    memset(dp, -1, sizeof(dp));

    cout << FIBO(n) << endl;

    return 0;
}


#include <bits/stdc++.h> //  Fibonacci Bottom Up
using namespace std;     // gitbook
int main()
{
    int n;
    cin >> n;
    int a[n];
    a[0] = 0;
    a[1] = 1;
                //  O(N)
    for (int i = 2; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
 cost << a[n] << endl;
    return 0;
}
