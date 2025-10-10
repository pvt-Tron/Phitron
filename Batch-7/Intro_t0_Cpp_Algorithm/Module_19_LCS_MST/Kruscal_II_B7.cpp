#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int by[N];
int group_size[N];
int level[N];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        by[i] = -1;
        group_size[i] = 1;
        level[i] = 0;
    }
}
int dsu_find(int node)
{
    if (by[node] == -1)
        return node;
    int leader = dsu_find(by[node]);
    by[node] = leader;
    return leader;
}
void dsu_union(int node1, int node2)
{
    // bad
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    by[leaderA] = leaderB;
}
void dsu_union_by_level(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (level[leaderA] > level[leaderB])
    {
        by [leaderB] = leaderA;
    }
    else if (level[leaderB] > level[leaderA])
    {
        by[leaderA] = leaderB;
    }
    else
    {
        by[leaderA] = leaderB;
        level[leaderB]++;
    }
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        by[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        by[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
class Edge{
    public:
        int a, b, w;
        Edge(int a, int b, int w){
            this->a = a;
            this->b = b;
            this->w = w;
    }
}
// class cmp{
//     public:
//     bool operator()(Edge &x, Edge &y){
//         return x.w < y.w;
//     }
// };
bool cmp(Edge l, Edge r){
    return l.w < r.w;
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edges_list;
    for (int i = 0; i < e; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        edges_list.push_back(Edge(a, b, w));
    }
    sort(edges_list.begin(), edges_list.end(), cmp);
    
    int total_cost = 0;
    dsu_initialize(n + 1);
    for(auto edge: edges_list){
        int parA = dsu_find(edge.a);
        int parB = dsu_find(edge.b);
        if(parA != parB){
            dsu_union(edge.a, edge.b);
            total_cost += edge.w;
            // cout << edge.a << " ";
            // cout << edge.b << " ";
            // cout << edge.w << endl;
            // dsu_union_by_size(edge.a, edge.b);
        }
        cout << total_cost << endl;
    }
    return 0;
}