#include<bits/stdc++.h>
using namespace std;
// DFS Depth First Search
/* DFS Input
8 6
1 2
0 5
2 3
6 7
4 5
1 3
*/
vector<int> adj_lst[1005];
bool vis[1005];

void dfs(int src){
    // base case
    cout << src << " ";
    vis[src] = true;
    for(int child : adj_lst[src]){
        if(!vis[child]) dfs(child);
    }
}

int main(){
    int n, e;
    cin >> n >> e;
    while(e--){
        int a,b;
        cin >> a >> b;
        adj_lst[a].push_back(b);
        adj_lst[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));

    for(int i = 0; i < n; i += 1){
        if(!vis[i]){
            dfs(i);
            cout << endl;
        }
    }
    return 0;
}
/* BFS Output
0 5 4
1 2 3
6 7
*/


