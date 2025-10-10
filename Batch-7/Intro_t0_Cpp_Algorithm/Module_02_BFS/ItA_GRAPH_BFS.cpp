#include<bits/stdc++.h>
using namespace std;
// BFS Breadth First Search
/* BFS Input
7 7
0 1
1 3
1 4
3 2
4 6
3 5
4 5
*/
vector<int> adj_lst[1005];
bool vis[1005];

void bfs(int src){

    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty()){ // O(N)
        //                  // BFS search
        int par = q.front();
        q.pop();
        //
        cout << par << " ";
        //
        for(int child : adj_lst[par]){ // O(N)
            if(vis[child] == false){
                // cout << child << " "; // debug
                q.push(child);
                vis[child] = true;
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

    bfs(0);

    return 0;
}
/* BFS Output

0 1 3 4 2 5 6

*/


