#include<bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int val){
    v.push_back(val); //       ins 1 val O(logN), ins N val O(NlogN)
    int cur_idx = v.size() - 1; // ^sort 1 O(NlogN),  ^sort N O(N^2logN)
    while(){
        int par_idx = (cur_idx - 1) / 2;
        // cout << par_idx << endl;
        if(v[par_idx] < v[cur_idx]) swap(v[par_idx], v[cur_idx]);
        else break;
    }
}

void prnt_heap(vector<int> v){
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i += 1){
        int val;
        cin >> val;
        insert_heap(v, val);
    }
    prnt_heap(v);
    del_MAXhp(v);
    prnt_heap(v);

    return 0;
}
