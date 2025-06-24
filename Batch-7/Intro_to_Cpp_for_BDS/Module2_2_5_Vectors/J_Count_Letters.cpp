#include<bits/stdc++.h>
using namespace std;
int main()
{
    string v1;
    getline(cin, v1);
    int n = v1.size();
    // cout << v1;
    int alph[26] = {0};
    for(int i = 0; i < n; i += 1){ // O(N + 26)
        alph[v1[i] - 'a'] += 1;        
    }
    for(int i = 0; i < 26; i += 1){
        if(alph[i] > 0){
            char c = i + 'a'; 
            cout << c << " : " << alph[i];
            if(i < 25) cout << endl;
        }
    }
    return 0;
}