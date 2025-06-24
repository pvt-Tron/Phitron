#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = 0;
    vector<int> v;
    vector<int> v1(n);
    
    for(int i = 0; i < n; i += 1){
        int num;
        cin >> num;
        v.push_back(num);
    }
    v1[0] = v[0];
    for(int i = 0; i < v.size(); i += 1){
        if(i > 0){
            v1[i] = v[i];
            v1[i] += v1[i - 1];
        }
    }
    // for(int i = 0; i < v.size(); i += 1) cout << v1[i] << "|" << v[i] << " ";
    // cout << endl;
    int nv = v.size() - 1;
    vector<int> v2(n);
    v2[0] = v[nv];
    for(int i = nv - 1; i >= 0; i -= 1){
        if(i < nv){
            v2[i] = v[i];
            v2[i] += v2[i + 1];
        } 
    }
    // for(int i = 0; i < v.size(); i += 1) cout << v[i] << "  ";
    // cout << endl;
    // for(int i = 0; i < v.size(); i += 1) cout << v1[i] << "  ";
    // cout << endl;
    // for(int i = 0; i < v.size(); i += 1) cout << v2[i] << "  ";
    // cout << endl;
    for(int i = 1; i < nv; i += 1){
        if(v1[i] == v2[i]){
            // return i;
            res = i;
            break;
        } 
        // cout << v1[i] << " ";
    }
    cout << endl;
    if(res) cout << res;
    else cout << "no Equilibrium";
    return 0;
}