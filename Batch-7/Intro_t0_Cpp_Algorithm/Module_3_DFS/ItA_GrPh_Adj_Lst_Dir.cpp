#include<bits/stdc++.h>
using namespace std;
// Adjacency List for Directed GRAPH
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
    vector<int>adj_lst[n]; // array of vector

    while(e--){
        int a,b;
        cin >> a >> b;
        adj_lst[a].push_back(b);  // this only Directed
        // adj_lst[b].push_back(a); // Undirected
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
