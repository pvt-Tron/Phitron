#include <bits/stdc++.h>
using namespace std;

/* input
4 4
0 1
1 2
2 3
3 0
Output
Is Cycle
//
3 3
0 1
1 2
1 2
2 0
Output
No Cycle
*/
bool vis[105];
vector<int> adj_lst[105];
bool pathvis[105];
bool cycle;

void dfs(int src){
    vis[src] = true;
    pathvis[src] = true;
    for(int child : adj_lst[src]){

        if(vis[child] && pathvis[child]){
            cycle = true;
            // return;
        }

        if(!vis[child])
        {
            pathvis[child] = src;
            dfs(child);
            // pathvis[child] = src;
        }
    }
    // return;
    pathvis[src] = false;
}
int main(){
    int n, e;
    cin >> n >> e;
    while(e--){
        int a,b;
        cin >> a >> b;
        adj_lst[a].push_back(b);
    }
    memset(vis, false, sizeof(false));
    memset(pathvis, false, sizeof(pathvis));

    cycle = false;
    for(int i = 0; i < n; i += 1)
        if(!vis[i]) dfs(i);

    // for(int i = 0; i < n; i += 1)
    // {
    //     cout << i << " pathvis: " << pathvis[i] << endl;
    // }
    if(cycle) cout << "Is Cycle";
    else cout << "No Cycle";
    return 0;
}
