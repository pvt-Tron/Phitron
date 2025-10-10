#include<bits/stdc++.h>
using namespace std;
// Adjacency List for Undirected GRAPH
/* input
5 5
0 1
0 2
3 0
1 3
3 4
*/
int main(){
    int n, e; // adj_lst
    cin >> n >> e;
    int a[n];
    vector<int>adj_lst[n]; // array of vector

    while(e--){
        int a,b;
        cin >> a >> b;
        adj_lst[a].push_back(b);
        adj_lst[b].push_back(a); // Undirected
    }
    for(int i = 0; i < n; i += 1){

        cout << i << " -> ";

        for(int j : adj_lst[i]){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
// Undirected Output
/*
0 -> 1
1 -> 0 3 4
2 -> 3
3 -> 1 2 5
4 -> 1 6 5
5 -> 3 4
6 -> 4
*/
// Directed Output
/*
0 -> 1
1 -> 3 4
2 ->
3 -> 2 5
4 -> 6 5
5 ->
6 ->
*/
// dfs_compare
def dfs(graph, start, target, visited):
    if start == target:
        return True
    visited.add(start)
    for neighbor in graph[start]:
        if neighbor not in visited:
            if dfs(graph, neighbor, target, visited):
                return True
    return False

def are_connected(graph, node1, node2):
    visited = set()
    return dfs(graph, node1, node2, visited)

# Example graph representation
graph = {
    'A': ['B', 'C'],
    'B': ['A', 'D'],
    'C': ['A'],
    'D': ['B']
}

print(are_connected(graph, 'A', 'D'))  # Output: True
print(are_connected(graph, 'A', 'C'))  # Output: True
print(are_connected(graph, 'C', 'D'))  # Output: False



def bfs(graph, start, target):
    visited = set()
    queue = deque([start])

    while queue:
        node = queue.popleft()
        if node == target:
            return True
        visited.add(node)
        for neighbor in graph[node]:
            if neighbor not in visited:
                queue.append(neighbor)
    return False

# Example usage remains the same
print(bfs(graph, 'A', 'D'))  # Output: True
print(bfs(graph, 'C', 'D'))  # Output: False
