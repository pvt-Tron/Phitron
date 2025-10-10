#include<bits/stdc++.h>
using namespace std;
// BFS Breadth First Search
// Globals
vector<int> adj_lst[1005];
bool vis[1005];
int level[1005];
int parent[1005];

void bfs(int src){

    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;


    while(!q.empty()){ // O(N)
        //                  // BFS
        int par = q.front();
        q.pop();

        for(int child : adj_lst[par]){ // O(N)
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        } // O(N^2)
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
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    int src, dst;
    cin >> src >> dst;
    bfs(src);

    // -------- view Output 1
    // for(int i = 0; i < n; i += 1){
    //     cout << i << " parent -> " << parent[i] << endl;
    //     // if(level) cout << i << " -> " << level[i] << endl;
    // }

    // -------- view Output 2
    // int node = dst;
    // while(node !=  -1){
    //     cout << node << " ";
    //     node = parent[node];
    // }

    // -------- Solution
    vector<int> path;
    int node = dst;
    while(node !=  -1){

        path.push_back(node);
        node = parent[node];
    }

    reverse(path.begin(), path.end());

    for(int x : path) cout << x << " ";

    return 0;
}
// input
/*
7 7
0 1
1 3
3 2
1 4
3 5
2 5
5 6
0
6
*/
// output 1
/*
0 parent -> -1
1 parent -> 0
2 parent -> 3
3 parent -> 1
4 parent -> 1
5 parent -> 3
6 parent -> 5
*/
// output 2
/*
6 5 3 1 0
*/

