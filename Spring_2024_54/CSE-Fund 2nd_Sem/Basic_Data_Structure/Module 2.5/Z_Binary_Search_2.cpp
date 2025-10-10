#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> v1(n);
    for(int i = 0; i < n; i++) cin >> v1[i];
    while(t--){
        int b;
        cin >> b;
        int notfnd = 1;
        for(auto it = v1.begin(); it <= v1.end(); it++){
            if(b == *it){
                cout << "found";
                notfnd = 0;
            }
        }
        if(notfnd) cout << "not found";
        if(t > 0) cout << endl;
    }
    return 0;
}