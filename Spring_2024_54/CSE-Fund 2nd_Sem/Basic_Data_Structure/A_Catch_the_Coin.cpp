#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[500][2];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
        // if(arr[i][1] == arr[i][0] || arr[i][1] == 0 || arr[i][0] == 0) cout << "YES" << endl;
        if(abs(arr[i][1] - arr[i][0]) <= (abs(arr[i][0])) || arr[i][1] == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}