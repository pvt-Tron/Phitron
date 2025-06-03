#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){    
        int n;
        cin >> n;
        cin.ignore();
        // cout << n << " ";
        string st;
        getline(cin, st);
        
        // cout << st << endl;
        int ar[26] = {0};

        int res = 0;
        for(int i = 0; i < st.size(); i += 1){
            for(int j = 0; j < 26; j += 1){
                if((st[i] - 'A')  == j){
                    if(ar[j] == 0){
                        ar[j] = 1;
                        res += 2;
                    }
                    else res += 1;
                    break;
                }
            }
        }
        cout << res;
        if(t > 0) cout << endl;
    }
    return 0;
}