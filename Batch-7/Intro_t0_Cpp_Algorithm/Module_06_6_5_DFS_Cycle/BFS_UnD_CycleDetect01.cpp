#include <bits/stdc++.h>
using namespace std;

/* input
6 5
0 5
0 1
1 2
2 3
3 0
4 5
  Output
0 1 3 2 4 5
Is Cycle

*/
bool vis[105];
vector<int> adj_lst[105];
int parent[105];
bool cycle;

void bfs(int src){
    queue<int> q;
    q.push({src});
    vis[src] = true;
    while(!q.empty()){
        int par = q.front();
        q.pop();
        // cout << par << " ";
        for(int child : adj_lst[par]){

            if(vis[child] && parent[par]!=child){
                cycle = true;
                // return;
            }
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                parent[child] = true;
            }
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
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    cycle = false;
    for(int i = 0; i < n; i += 1)
        if(!vis[i]) bfs(i);
//    for(int i = 0; i < n; i += 1)
//    {
//        cout << i << "parent: " << parent[i] << endl;
//    }
//    cout << endl;
    if(cycle) cout << "Is Cycle";
    else cout << "No Cycle";
    return 0;
}
