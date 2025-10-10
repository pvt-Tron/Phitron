#include <bits/stdc++.h>
using namespace std;
/* input
1 0
2 3
3 4
4 5
//
4 4
1 0
2 3
3 4
4 2
  Output
0 1 3 2 4 5
*/
bool vis[105];
vector<int> adj_lst[105];
int parent[105];
bool cycle;

void dfs(int src){
    vis[src] = true;
    for(int child : adj_lst[src]){
        if(vis[child] && parent[src] != child) cycle = true;
        if(!vis[child]){
            parent[child] = src;
            dfs(child);
            // parent[child] = src;
        }
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
    memset(vis, false, sizeof(false));
    memset(parent, -1, sizeof(parent));

    cycle = false;
    for(int i = 0; i < n; i += 1)
        if(!vis[i]) dfs(i);

//    for(int i = 0; i < n; i += 1)
//    {
//        cout << i << " parent: " << parent[i] << endl;
//    }
    if(cycle) cout << "Is Cycle";
    else cout << "No Cycle";
    return 0;
}
