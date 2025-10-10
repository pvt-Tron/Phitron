#include<bits/stdc++.h>
using namespace std;
void sum(int n1, vector<int> v2, int index){
    int runningsum[n1];
    runningsum[0] = v2[0];
    cout << runningsum[0] << " ";
    for(int i = index + 1; i < n1; i++){
        runningsum[i] = runningsum[i - 1] + v2[i];
        cout << runningsum[i];
        if(i < n1 - 1) cout  << " ";
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for(int i = 0; i < n; i++){
        cin >> v1[i];
        if(i > n - 1) cout << endl;
    }
    sum(n, v1, 0);
    // int *ptr = new int;
    // ptr = sum(n, v1, 0);
    // for(int i = 0; i < n; i++){
    //     cout << *(ptr + i);
    // }
    return 0;
}