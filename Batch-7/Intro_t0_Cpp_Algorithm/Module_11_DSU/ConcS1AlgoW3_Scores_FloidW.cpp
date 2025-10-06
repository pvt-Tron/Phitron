//  https://cses.fi/problemset/task/1673 // Scores

 #include <bits/stdc++.h>
 #define ll long long int
 #define all(x) x.begin(), x.end()
 #define nl '\n'
 #define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
 using namespace std;

 class Edge
 {
    public:
    int u, v, c;
    Edge(int u, int v, int c) {
        this->v = v;
        this->u = u;
        this->c = c;
    }
 };


 int main()
 {
     fastIO();
     int n, m;
     cin>>n>>m;

     vector<Edge> edlist;
     ll pinf = 1e17;
     ll ninf = -1 * pinf;

     vector<ll> dis(n+1, pinf);
     dis[1] = 0;

     for(int i=1; i<=m; i++)
     {
        int a, b, c;
        cin>>a>>b>>c;
        c = -1 * c;
        edlist.push_back(Edge(a, b, c));
     }

     for(int i=1; i<n; i++)
     {
        for(auto [a, b, c] : edlist)
        {
            if (dis[a] == pinf) continue;
            dis[b] = min(dis[b], dis[a]+c);
        }
     }

     for(int i = 1; i<=n; i++)
     {
        for(auto [a, b, c] : edlist)
        {
            if (dis[a] == pinf) continue;
            if(dis[a] + c < dis[b]) {
                dis[b] = ninf;
            }
        }
     }

     if(dis[n] == ninf) {
        cout<<-1<<nl;
     } else {
        cout<<dis[n]*-1<<nl;
     }

     return 0;
 }
 // floyd-warshall
 // https://www.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1

// User function template for C++

class Solution {
  public:
    void floydWarshall(vector<vector<int>> &dist) {
        // Code here
        int n = dist.size();
        int pinf = 1e8;

        for(int k=0; k<n; k++)
        {
            for(int i=0; i<n; i++) {

                for(int j=0; j<n; j++)
                {
                    if(dist[i][k] != pinf && dist[k][j] != pinf && dist[i][k] + dist[k][j] < dist[i][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }


    }
};
