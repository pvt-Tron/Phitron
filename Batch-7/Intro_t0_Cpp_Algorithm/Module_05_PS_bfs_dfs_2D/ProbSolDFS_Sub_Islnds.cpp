class Solution {
public:
    bool vis[1005][1005];
    vector<pair<int,int>> d = {{0,-1},{0,1},{-1,0},{1,0}};
    int n,m, flag;
    bool valid(int i, int j){
        if(i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }
//    bool valid(int i, int j){
//        return (i < 0 || i >= n || j < 0 || j >= m) ? false : true;
//    }

    void dfs(int si, int sj, vector<vector<int>>& grid1, vector<vector<int>>& grid2)
    {
        vis[si][sj] = true;
        if(grid1[si][sj] == 0){
            flag = false;
            // return;
        }
        for(int i = 0; i < 4; i += 1){
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid2[ci][cj] == 1)
                dfs(ci,cj, grid1, grid2);
        }
    }

int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        n = grid1.size();
        m = grid1[0].size();
        memset(vis, false, sizeof(vis));
        int cnt = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (!vis[i][j] && grid2[i][j] == 1){
                    flag = true;
                    dfs(i, j, grid1, grid2);
                    if(flag) cnt += 1;
                }
        return cnt;
    }
};
