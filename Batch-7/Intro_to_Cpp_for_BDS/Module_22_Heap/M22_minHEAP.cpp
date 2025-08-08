#include<bits/stdc++.h>
using namespace std;

void ins_MINhp(vector<int> &v, int val){
    v.push_back(val); //       ins 1 val O(logN), ins N val O(NlogN)
    int cur_idx = v.size() - 1; // ^sort 1 O(NlogN),  ^sort N O(N^2logN)
    while(){
        int par_idx = (cur_idx - 1) / 2;
        // cout << par_idx << endl;
        if(v[par_idx] > v[cur_idx]) swap(v[par_idx], v[cur_idx]);
        else break;
    }
}
void del_MINhp(vector<int> &v){
    cout << v[0] << "Deleted. -> ";
    v[0] = v.back();
    // cout << v[0] << endl;
    v.pop_back();
    int cur_idx = 0;
    while(true){
        int left_idx = cur_idx * 2 + 1;
        int rght_idx = cur_idx * 2 + 2;
        int left_val = INT_MAX, rght_val = INT_MAX;
        if(left_idx < v.size()) left_val = v[left_idx];
        if(left_idx < v.size()) rght_val = v[rght_idx];
        if(left_val < rght_val && left_val < v[cur_idx]){
            swap(v[left_idx], v[cur_idx]);
            cur_idx = left_idx;
        }
        else if(rght_val < left_idx && rght_val < v[cur_idx]){
            swap(v[rght_idx], v[cur_idx]);
            cur_idx = rght_idx;
        }
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
        ins_MINhp(v, val);
    }
    prnt_heap(v);
    del_MINhp(v);
    prnt_heap(v);

    return 0;
}
