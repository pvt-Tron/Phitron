#include<bits/stdc++.h>
using namespace std;
// DFS Depth First Search
/* DFS Input
3 4
....
....
....
1 2
*/
char grid[105][105];
bool vis[105][105];
vector<pair<int, int>> d = {{-1,0},{1,0},{0,-1},{0,1}} ;

void dfs(int si, int sj){

    cout << si << " " << sj << endl;

    vis[si][sj] = true;

    for(int i = 0; i < 4; i += 1){
        int ci, cj;
        ci = si + d[i].first;
        cj = sj + d[i].second;
        cout << ci << " " << cj << endl;
    }
}

int main(){

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1){
            cin >> grid[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;

    // memset(vis, false, sizeof(vis));

    dfs(si,sj);

    return 0;
}
/* DFS Output

1 2
0 2
2 2
1 1
1 3

*/
