#include<bits/stdc++.h>
using namespace std;
int fibo1(int n1){
 int k;
    int fib1 = 2;
    int fib2 = 1;
    int fib3 = 0;
    while(fib1 != n1);{
        k= fib1;
        fib1 = fib2 + fib3;
        fib2 = k;
    }
    return fib2;
}
int main()
{
    int n;
    cin >> n;
    if(n < 2){cout << 0;}
    else{
        int result = fibo1(n);
        cout << result;
        }
    
    return 0;
}