#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char c;
        cin >> c;
        for(int i = 0; i < n; i++){
            cout << c << " ";
        }
        if(t > 0) cout << endl;
    }
    return 0;
}