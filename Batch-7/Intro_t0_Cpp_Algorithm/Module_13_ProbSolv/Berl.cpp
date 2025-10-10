// Accepted // https://codeforces.com/problemset/problem/25/D

#include <bits/stdc++.h>
using namespace std;

int par[1005];
int group_size[1005];
// -----------
int find_dsu(int node){ // O(logN)
    if (par[node] == -1)
        return node;
    int leader = find_dsu(par[node]);
    par[node] = leader;
    return leader;
}
void dsu_union(int node1, int node2){

    int leader1 = find_dsu(node1);
    int leader2 = find_dsu(node2);

    if(leader1 == leader2) return;

    if (group_size[leader1] >= group_size[leader2]){
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else{
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}
int main()
{
    int n;
    cin >> n;
    // memset(par, -1, sizeof(par));
    //  memset(group_size, 1, sizeof(group_size));
    for (int i = 1; i <= n; i++){
        par[i] = -1;
        group_size[i] = 1;
    }

    vector<pair<int,int>> rmv;
    vector<pair<int,int>> create;
    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        int leaderA = find_dsu(a);
        int leaderB = find_dsu(b);
        if(leaderA == leaderB){
            //cycle
            rmv.push_back({a,b});
        }
        else dsu_union(a, b);
    }
    for(int i = 2; i <= n; i++){
        int leader1 = find_dsu(1);
        int leader2 = find_dsu(i);
        if(leader1 != leader2){
            create.push_back({1,i});
            dsu_union(1,i);
        }
    }
    cout << rmv.size() << endl;
    for(int i = 0; i < rmv.size(); i++){
        cout << rmv[i].first << " " << rmv[i].second << " " << create[i].first << " " << create[i].second << endl;
    }
//  for(auto p : rmv) cout << p.first << " " << p.second << endl;
//  for(auto p : create) cout << p.first << " " << p.second << endl;

    return 0;
}
//

// Submitted Accepted
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int group_size[N];
void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}
int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
int main()
{
    int n;
    cin >> n;
    dsu_initialize(n);
    vector<pair<int, int>> bad;
    vector<pair<int, int>> create;
    for (int i = 1; i <= n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA == leaderB)
        {
            bad.push_back({a, b});
        }
        else
        {
            dsu_union_by_size(a, b);
        }
    }
    cout << bad.size() << endl;
    for (int i = 2; i <= n; i++)
    {
        int leaderA = dsu_find(1);
        int leaderB = dsu_find(i);
        if (leaderA != leaderB)
        {
            create.push_back({1, i});
            dsu_union_by_size(1, i);
        }
    }
    for (int i = 0; i < bad.size(); i++)
    {
        cout << bad[i].first << " " << bad[i].second << " " << create[i].first << " " << create[i].second << endl;
    }
    return 0;
}
