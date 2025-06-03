#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    getline(cin, st);
    string eg = "EGYPT";
    for(int i = 0; i < st.size(); i += 1){
        if(st[i] == 'E'){    
            for(int j = 0; j < 5; j += 1){
                if(st[i + j] != eg[j]) break;
                if(j == 4){
                    st.replace(st.begin() + i,st.begin() + i + 5, " ");
                }
            }
        }
    }
    cout << st;
    return 0;
}