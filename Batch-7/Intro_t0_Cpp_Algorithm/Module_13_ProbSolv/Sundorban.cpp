#include<bits/stdc++.h>// https://school.outsbook.com/problems/problemdetails/10106
using namespace std;
// globals
char grid[35][35];
bool vis[35][35];
int level[35][35];
vector<pair<int, int> > d;
int  n;
// functions

bool valid(int i, int j){
    return (i < 0 || i >= n || j < 0 || j >= n) ? false : true;
}
void bfs(int si, int sj){
    queue< pair<int, int> > q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while(!q.empty()){
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for(int i = 0; i < 4; i += 1){
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] != 'T'){

                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}
int main(){
    d.push_back({-1,0});
    d.push_back({1,0});
    d.push_back({0,-1});
    d.push_back({0,1});

    int si, sj, di, dj;
    // n global
    while(cin >> n){

        for(int i = 0; i < n; i += 1){

            for(int j = 0; j < m; j += 1){
                cin >> grid[i][j];
                if(grid[i][j] == 'S'){
                    si = i;
                    sj = j;
                }
                if(grid[i][j] == 'E'){
                    di = i;
                    dj = j;
                }
            }
    //  cout << si << " " << sj << endl;
    //    cout << di << " " << dj << endl;

        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

        bfs(si,sj);

        cout << level[di][dj] << endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
  Chariot A[50][50]];
bool screws[50][50]];
int dis[50][50]];
int n;
vector<pair<int, int>> d;
bool valid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < n)
        return true;
    else
        return false;
}
void bfs(int si, int sj)
{
 queue<pair<int, int>> q;
    Q.push({si, sj});
    dis[si][sj] = 0;
    vis[si][sj] = true;
    while (!q.empty())
    {
 even<int, int> by = q.forehead();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != 'T')
            {
                Q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[par.first][para.second] + 1;
            }
        }
    }
}
int main()
{
    d.push_back({0, 1});
    d.push_back({0, -1});
    d.push_back({-1, 0});
    d.push_back({1, 0});
    while (cin >> n)
    {
        int si, sj;
        int di, dj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'S')
                {
                    si = i;
                    sj = j;
                }
                if (a[i][j] == 'E')
                {
                    di = i;
                    dj = j;
                }
            }
        }
        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));
        BFS(SI, SJ);
        cout << dis[di][dj] << endl;
    }
    return 0;
}
