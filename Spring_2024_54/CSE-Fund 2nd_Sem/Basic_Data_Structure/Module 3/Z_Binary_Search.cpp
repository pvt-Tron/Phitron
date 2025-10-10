#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> v1(n);
    for(int i = 0; i < n; i++) cin >> v1[i];
    sort(v1.begin(), v1.end());
    while(t--){
        int b;
        cin >> b;
        int notfnd = 1;
        int lw = 0;
        int hg = n - 1;
        while(lw <= hg){
            int mid = (lw + hg) / 2;
            if(v1[mid] == b){
                notfnd = 0;
                break;
            }
            else if(v1[mid] > b) hg = mid - 1;
            else lw = mid + 1;
        }
        if(notfnd) cout << "not found";
        else cout << "found";
        if(t > 0) cout << endl;
    }
    return 0;
}