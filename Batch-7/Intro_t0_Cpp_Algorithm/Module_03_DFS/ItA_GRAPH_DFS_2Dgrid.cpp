#include<bits/stdc++.h>
using namespace std;
// BFS Breadth First Search 2D Grid (DFS Depth First Search 2D Grid)
/* BSF (and DFS) Input
3 4
....
....
....
1 2
*/
// globals
char grid[105][105];
bool vis[105][105];
vector<pair<int, int>> d = {{-1,0},{1,0},{0,-1},{0,1}} ;
int  n, m;

// functions

// bool valid(int i, int j) if(i < 0) return false;
bool valid(int i, int j){
    // if(i < 0 || i >= n || j < m || j >= m) return false;
    // return true;
    return (i < 0 || i >= n || j < 0 || j >= m) ? false : true;
}
void dfs(int si, int sj){

    cout << si << " " << sj << endl;

    vis[si][sj] = true;

    for(int i = 0; i < 4; i += 1){
        int ci, cj;
        ci = si + d[i].first;
        cj = sj + d[i].second;
        // cout << ci << " " << cj << endl;
        if(valid(ci,cj) && !vis[ci][cj]) dfs(ci,cj);
    }
}

void bfs(int si, int sj){
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while(!q.empty()){
        pair<int, int> par = q.front();
        int par_i = par.first;
        int par_j = par.second;

        cout << par_i << " " << par_j << endl;

        q.pop();
        for(int i = 0; i < 4; i += 1){
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj]){

                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }

}

int main(){
    // n m globals
    cin >> n >> m;
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1){
            cin >> grid[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));

    // dfs(si,sj);
    bfs(si,sj);

    return 0;
}
/* BFS 2D Grid Output
1 2
0 2
2 2
1 1
1 3
0 1
0 3
2 1
2 3
1 0
0 0
2 0
*/
