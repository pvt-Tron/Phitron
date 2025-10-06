#include<bits/stdc++.h>
using namespace std;
vector<array<int, 3>> kruskalMST(vector<array<int, 3>>& edges, int n, int m){
    // Implementation of Kruskal's algorithm
    // to find the Minimum Spanning Tree (MST)
    sort(edges.begin(), edges.end());
    vector<int> parent(n + 1);
    iota(parent.begin(), parent.end(), 0);

    auto find = [&](int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    };

    int mstCost = 0;
    for (const auto& [w, u, v] : edges)
    {
        int pu = find(u);
        int pv = find(v);
        if (pu != pv)
        {
            mstCost += w;
            parent[pu] = pv;
        }
    }
    cout << "MST Cost: " << mstCost << endl;
    return edges;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<array<int, 3>> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({w, u, v});
    }
    vector<array<int, 3>> mstEdges;
    mstEdges = kruskalMST(edges, n, m);
    for (const auto& [w, u, v] : mstEdges)
        cout << u << " " << v << " " << w << endl;
    
    return 0;
}