/*

1. A problem based on Graph Algorithm
https://www.spoj.com/problems/NAKANJ/


2. Shortest Path printing of Graph
 + How can we manipulate the path

3. Shortest Path Printing of 2D graph

5 5
A....
.###.
.###.
.###.
....B

*/

#include <bits/stdc++.h> // NAKANJ
using namespace std;
char grid[8][8];
bool vis[8][8];
int level[8][8];
vector<pair<int, int>> d = {{2, -1}, {1, -2}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}};
int n=8, m=8;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for (int i = 0; i < 8; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        // cin >> n >> m;
        // n = 8, m = 8;
        string src, des;
        cin >> src >> des;

        int si, sj, di, dj;
        // cin >> si >> sj >> di >> dj;
        si = src[1] - '1';
        sj = src[0] - 'a';
        di = des[1] - '1';
        dj = des[0] - 'a';
        // cout << si << sj << " " << di << dj << endl;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        bfs(si, sj);
        cout << level[di][dj] << endl;
    }
    return 0;
}

/*
input:
3
a1 h8
a1 c2
h8 c3

*/

#include<bits/stdc++.h> // bfs_2d_Grid
using namespace std;
char grid[105][105];
bool vis[105][105];
int level[105][105];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for(int i=0;i<4;i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='.')
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> grid[i][j];

    int si,sj,di,dj;
    cin >> si >> sj >> di >> dj;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    bfs(si,sj);
    cout << level[di][dj] << endl;
    return 0;
}

#include <bits/stdc++.h> // Grid Manipulate
using namespace std;
// vector<int> adj_list[1005];
char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
pair<int, int> parent[1005][1005];
vector<pair<int, int>> d = {{1, 0}, {0, -1}, {0, 1}, {-1, 0}};
int row, col;

bool valid(int i, int j)
{
    if (i < 0 || i >= row || j < 0 || j >= col)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int pi = par.first;
        int pj = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = pi + d[i].first;
            int cj = pj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[pi][pj] + 1;
                parent[ci][cj] = {pi, pj};
            }
        }
    }
}

int main()
{

    cin >> row >> col;

    int si, sj, di, dj;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            else if (grid[i][j] == 'B')
            {
                di = i;
                dj = j;
            }
        }
    }

    // cout << si << sj << " " << di << dj;

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    bfs(si, sj);
    // cout << vis[di][dj] << endl;

    cout << "minimum cost -> " << level[di][dj] << endl;

    if (vis[di][dj] == true)
    {
        int node_i = di, node_j = dj;
        while (1)
        {
            pair<int, int> par = parent[node_i][node_j];
            node_i = par.first;
            node_j = par.second;
            if (grid[node_i][node_j] == 'A')
            {
                break;
            }
            grid[node_i][node_j] = 'O';
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Destination not visited" << endl;
    }

    return 0;
}


/*

input:
5 5
A....
.###.
.###.
.###.
....B

*/


#include <bits/stdc++.h>  // Path Manipulate
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];
int parent[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    q.push(4); // forcefully node push in queue
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    int src, dst;
    cin >> src >> dst;
    bfs(src);

    vector<int> path;
    int node = dst;
    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());
    for (int x : path)
    {
        cout << x << " ";
    }

    return 0;
}
