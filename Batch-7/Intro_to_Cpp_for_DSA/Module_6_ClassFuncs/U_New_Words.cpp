#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    getline(cin, st);
    for(int i = 0; i < st.size(); i += 1){
        if(st[i] < 97) st[i] += 32;
    }
    string eg = "egypt";
    int ar[5] = {0};
    for(int i = 0; i < st.size(); i += 1){
        for(int j = 0; j < 5; j += 1){
            if(st[i] == eg[j]){
                ar[j] += 1;
                break;
            }
        }
    }
    int res = INT_MAX;
    for(int j = 0; j < 5; j += 1){
        if(ar[j] < res){
            res = ar[j];
        }
    }
    cout << res;
    return 0;
}