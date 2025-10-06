class Solution {
public:
    vector<int> adj_lst[200005];
    bool vis[200005];

    void dfs(int src){
        vis[src] = true;
        for(int child : adj_lst[src]){
            if(!vis[child]) dfs(child);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        for(int i = 0; i < edges.size(); i += 1){
            int a = edges[i][0];
            int b = edges[i][1];
            adj_lst[a].push_back(b);
            adj_lst[b].push_back(a);
        }
        memset(vis,false,sizeof(vis));
        dfs(source);
        return vis[destination];
    }
};
