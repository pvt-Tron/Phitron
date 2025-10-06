/*
Problem 1:
Let's say for a graph we have connected the nodes with edges.
How to determine if all the node got connected or not?

Problem 2:
Building Roads- https://cses.fi/problemset/task/1666/
*/

#include <bits/stdc++.h> // All nodes Connected?
using namespace std;
int par[1005];
int group_size[1005];

int find(int node) // O(logN)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{
    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));

    int n, e;
    cin >> n >> e;
    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA != leaderB)
        {
            dsu_union(a, b);
        }
    }

    bool flag = true;

    int leader_1 = find(1);

    for (int i = 1; i <= 10; i++)
    {
        int leader_node = find(i);
        if (leader_1 != leader_node)
        {
            flag = false;
        }
    }

    if (flag == true)
    {
        cout << "Same component" << endl;
    }
    else
    {
        cout << "Not same component" << endl;
    }

    return 0;
}
// Building Roads

#include <bits/stdc++.h>
using namespace std;
int par[100005];
int group_size[100005];

int find(int node) // O(logN)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{
    // memset(par, -1, sizeof(par));
    // memset(group_size, 1, sizeof(group_size));

    for (int i = 0; i < 100005; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }

    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA != leaderB)
        {
            dsu_union(a, b);
        }
    }

    int cnt = 0;
    vector<int> v;
    for (int i = 2; i <= n; i++)
    {
        int leader_1 = find(1);
        int leader_node = find(i);
        if (leader_1 != leader_node)
        {
            cnt++;
            dsu_union(leader_1, leader_node);
            v.push_back(leader_node);
        }
    }
    cout << cnt << endl;

    for (int val : v)
    {
        cout << 1 << " " << val << endl;
    }
    return 0;
}
