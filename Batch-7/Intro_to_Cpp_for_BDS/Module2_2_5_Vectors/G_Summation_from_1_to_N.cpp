#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long sum = (n * (n + 1)) / 2;
    cout << fixed << (long long) sum;

        long long int n1;
        long long int a = 0;
        cin >> n1;
        long long int i = n1;
        a = i*(i+1);
        a /= 2;
        cout << a << endl;
    return 0;
}