#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for(int i =0; i < n;i++){
        cin >> v1[i];
    }
    sort(v1.begin(),v1.end());
    int q;
    cin >> q;
    while(q--){
        int q1;
        cin >> q1;
        int notfnd = 1;
        // for(int i = 0; i < n; i++){
        //     if(v1[i] == q1){
        //         cout << "YES";
        //         notfnd = 0;
        //         break;
        //     }
        // }
        int lw = 0;
        int hg = n - 1;
        
        while(lw <= hg){
            int mid = (lw + hg) / 2;
            if(v1[mid] == q1){
                cout << "YES";
                notfnd = 0;
                break;
            }
            else if(v1[mid] > q1) hg = mid - 1;
            else lw = mid + 1;
        }
        if(notfnd) cout << "NO";
        if(q > 0) cout << endl;
    }
    return 0;
}