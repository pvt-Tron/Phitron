-------------------> Types of Graph <-------------------
1. Directed vs Undirected
2. Weighted vs Unweighted
3. Cyclic vs Acyclic
4. Connected vs Disconnected

--------------> Types of graph representation <--------------
1. Adjacency Matrix

2. Adjacency List

3. Edge List


---------------> Pros and Cons Adjacency Matrix <-----------------
1. Pros of Adjacency Matrix
    # Removing any Edge O(1)
    # Checking if there's any edge O(1)
    # Efficient for Dense Graphs (space well utilised)
2. Cons of Adjacency Matrix
    # Space Complexity: O(V²)
    # To find all neighbors of a vertex, you must scan the entire row.

---------------> Pros and Cons Adjacency List <-----------------
1. Pros of Adjacency List
    # Space Efficient (only store existing edges)
    # Easy to find all neighbors of a vertex (just traverse its list)
    # Edge Insertion is O(1) (append to the list)

2. Cons of Adjacency List
    # Checking if there's an edge between two vertices is O(degree)
    # Removing a specific edge is O(degree)

-----------> Space Complexity of Adjacency Matrix and Adjacency List <------------
# Adjacency Matrix O(VxV)
# Adjacency List
    O(V+2E) for Undirected Graph
    O(V+E) for Directed Graph


#include <bits/stdc++.h> // list to Matrix
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif

int main()
{
    fastIO();
    int n;
    cin>>n;

    vector<vector<int>> mat(n, vector<int>(n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>mat[i][j];
        }
    }


    vector<vector<int>> adlist(n, vector<int>());
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if (mat[i][j] == 1) {
                adlist[i].push_back(j);
            }
        }
    }


    for(int i=0; i<n; i++) {
        cout<<i<<" -> ";
        for(auto x : adlist[i]) {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    vector<vector<int>> mat2(n, vector<int>(n));
    for(int i=0; i<n; i++)
    {
        for(auto val : adlist[i]) {
            mat2[i][val] = 1;
        }
    }

    cout<<"------------"<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
// Matrix to list

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif

int main()
{
    fastIO();
    int n;
    cin>>n;

    vector<vector<int>> mat(n, vector<int>(n));
    for(int i=0; i<n; i++) {
        for(int j= 0; j<n; j++) {
            cin>>mat[i][j];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<vector<int>> adlist(n, vector<int>());
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if (mat[i][j] == 1) {
                adlist[i].push_back(j);
            }
        }
    }

    cout<<"-------------------"<<endl;
    for(int i=0; i<n; i++) {
        cout<<i<<" -> ";
        for(auto val : adlist[i]) {
            cout<<val<<" ";
        }
        cout<<endl;
    }

    vector<vector<int>> mat2(n, vector<int>(n));

    for(int i=0; i<n; i++) {
        for(auto x : adlist[i]) {
            mat2[i][x] = 1;
        }
    }

    cout<<"-----------"<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
