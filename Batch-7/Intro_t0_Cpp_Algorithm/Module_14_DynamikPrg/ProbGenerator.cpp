// https://codeforces.com/problemset/problem/1980/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        int fre[7] = {0};
        for(char c : s){
            fre[c - 'A']++;
        }
        int cnt = 0;
        for(int i = 0; i < 7; i += 1){
            if(fre[i] < m){
                cnt += m - fre[i];
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
