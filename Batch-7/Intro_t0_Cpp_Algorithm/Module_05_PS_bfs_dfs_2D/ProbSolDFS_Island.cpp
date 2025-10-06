//class Solution {
//public:
//    bool vis[105][105];
//    vector<pair<int,int>> d = {{0,1},{0,-1},{1,0},{-1,0}};
//    int n,m;
//    int cnt = 0;
//    bool valid(int i, int j){
//        if(i < 0 || i >= n || j < 0 || j >= m)
//            return false;
//        return true;
//    }
//    bool valid(int i, int j){
    //     return (i < 0 || i >= n || j < 0 || j >= m) ? false : true;
    // }
//    void dfs(int si, int sj, vector<vector<int>>& grid){
//        vis[si][sj] = true;
//        for(int i = 0; i < 4; i += 1){
//            int ci = si + d[i].first;
//            int cj = sj + d[i].second;
//            if(!valid(ci,cj) || (valid(ci,cj) && grid[ci][cj] == 0))
//                cnt += 1;
//            else if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == 1)
//                dfs(ci,cj, grid);
//        }
//    }
//    int islandPerimeter(vector<vector<int>>& grid) {
//        n = grid.size();
//        m = grid[0].size();
//        memset(vis, false, sizeof(vis));
//        for(int i = 0; i < n; i += 1)
//            for(int j = 0; j < m; j += 1)
//                if(!vis[i][j] && grid[i][j] == 1)
//                    dfs(i,j,grid);
//        return cnt;
//    }
//};


class Solution {
public:
    bool vis[105][105];
    vector<pair<int,int>> d = {{0,1},{0,-1},{1,0},{-1,0}};
    int n,m;
    int cnt;
    bool valid(int i, int j){
        if(i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }
    void dfs(int si, int sj, vector<vector<int>>& grid){
        // cout << si << " " << sj << endl;
        vis[si][sj] = true;
        for(int i = 0; i < 4; i += 1){
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if(!valid(ci,cj) || (valid(ci,cj) && grid[ci][cj] == 0))
                cnt += 1;
            else if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == 1)
                dfs(ci,cj, grid);
            // 2
            // if(valid(ci,cj) == false) cnt += 1;
            // else if(valid(ci,cj) == true && grid[ci][cj] == 0) cnt += 1;
            // else if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == 1)
            //     dfs(ci,cj, grid);
            // 1
            // if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == 1)
            //     dfs(ci,cj, grid);
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        cnt = 0;
        n = grid.size();
        m = grid[0].size();
        // cout << n << " " << m << endl;
        memset(vis, false, sizeof(vis));
        // call 1st earth square in dfs
        for(int i = 0; i < n; i += 1)
            for(int j = 0; j < m; j += 1)
                if(!vis[i][j] && grid[i][j] == 1)
                    dfs(i,j,grid);
        return cnt;
    }
};
