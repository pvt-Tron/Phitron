#include<bits/stdc++.h>
using namespace std;
void func(int n, char c){
    if(n <= 0) return;
    printf("%c ", c);
    return func(n - 1, c);
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        cin >> n >> c;
        func(n,c);    
        if(t > 0) cout << endl;
    }
    return 0;
}