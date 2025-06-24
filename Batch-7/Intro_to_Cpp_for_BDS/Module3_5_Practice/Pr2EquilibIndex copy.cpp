#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int res = 0;
    vector<int> v0;
    vector<int> v1;
    for(int i = 0; i < n; i += 1){
        int num;
        cin >> num;
        cout << num << " ";
        v0.push_back(num);
        if(i > 0) v1[i] = v0[i] + v0[i - 1];
        else v1[i] = num;
        cout << num << " " << v0[i] << " " << v1[i] << endl; 
    }
    vector<int> v2;
    int j = 0;
    for(int i = n - 1; i >= n; i -= 1){
        if(j < n - 1) v2[j] = v0[i] + v0[i + 1];
        else v2[j] = v0[i];
    }
    for(int i = 1; i < n - 1; i += 1){
        if(v1[i - 1] == v2[i + 1]){
            res = i;
        }
    }
    if(res != 0) cout << res;
    else cout << "NO";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int res = 0;
    int v0[n];
    int v1[n];
    for(int i = 0; i < n; i += 1){
        // int num;
        // cin >> num;
        // cout << num << " ";
        // v0.push_back(num);
        cin >> v0[i];
    }
    for(int i = 0; i < n; i += 1){
        if(i > 0) v1[i] = v0[i] + v0[i - 1];
        //     if(v0[i] < 0 && v0[i - 1]){
        //         v1[i] = v0[i] - v0[i - 1];
        //     }
        //     else v1[i] = v0[i] + v0[i - 1];
        // } 
        else v1[i] = v0[i];
        // cout << " v" << v0[i] << " V" << v1[i]; 
    }

    cout << endl;
    int v2[n];
    int j = 0;
    for(int i = n - 1; i >= 0; i -= 1){
        if(j < n - 1) v2[j] = v0[i] + v0[i + 1];
        else v2[j] = v0[i];
        j += 1;
    }
    
    for(int i = 1; i < n - 1; i += 1){
        cout << v1[i - 1] << " " << v2[i + 1] << " ";
        if(v1[i - 1] == v2[i + 1]){
            res = i;
            cout << "!"; 
        }
    }
    if(res != 0) cout << res;
    else cout << "NO";
    return 0;
}