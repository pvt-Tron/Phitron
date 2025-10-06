// MST: Minimum Spanning Tree
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1, vector<int>(n + 1, INT_MAX));
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u][v] = min(graph[u][v], w);
        graph[v][u] = min(graph[v][u], w);
    }

    vector<int> key(n + 1, INT_MAX);
    vector<bool> inMST(n + 1, false);
    key[1] = 0;

    for (int i = 1; i <= n; i++)
    {
        int u = -1;
        for (int j = 1; j <= n; j++)
        {
            if (!inMST[j] && (u == -1 || key[j] < key[u]))
                u = j;
        }

        inMST[u] = true;

        for (int v = 1; v <= n; v++){
            if (graph[u][v] != INT_MAX && !inMST[v])
            {
                key[v] = min(key[v], graph[u][v]);
            }
        }
    }

    int mstCost = 0;
    for (int i = 1; i <= n; i++)
    {
        if (key[i] == INT_MAX)
        {
            cout << "No MST exists\n";
            return 0;
        }
        mstCost += key[i];
    }
    cout << "MST Cost: " << mstCost << endl;
    return 0;
}