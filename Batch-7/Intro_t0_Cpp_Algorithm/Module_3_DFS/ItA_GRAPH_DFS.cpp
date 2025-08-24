#include<bits/stdc++.h>
using namespace std;
// DFS Depth First Search
/* DFS Input
7 7
0 2
2 4
0 1
1 5
1 3
0 3
3 6
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

    dfs(0);

    return 0;
}
/* DFS Output

0 1 3 4 2 5 6

*/

#include <bits/stdc++.h>
using namespace std;

const int maxx = 100005;
vector <int> tree[maxx];

void dfs(int node) {
    cout << node << " ";
    for (auto i: tree[node]) {
        dfs(i);
    }
}

int main() {
    int n;
    cin >> n;


    int u, v;
    for (int i = 0; i < n - 1; i++) {
        cin >> u >> v;
        tree[u].push_back(v);
    }

    // Start DFS from the root node
    dfs(1);
}

