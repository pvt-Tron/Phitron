#include<bits/stdc++.h>
using namespace std;

int main(){ /* / 5 5 / 0 1 / 0 2 / 3 0 / 1 3 / 3 4 / */
    int n, e;
    cin >> n >> e;
    int adj_mat[n][n];

    memset(adj_mat, 0, sizeof(adj_mat));

    for(int i = 0; i < e; i += 1){

        for(int j = 0; j < e; j += 1){ // diagonal
            if(i == j) arj[i][j] = 1;
        }

        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1; // undirected
    }

    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < e; j += 1){
            cout << adj_mat[i][j] << " ";
        }
    }

    int a[n];
    vector<int> adj_list[n]; // array of vector
    while(e--){
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[a].push_back(a); // undirected
    }

    for(int i = 0; i < e; i += 1){
        cout << i << " -> ";
        for(int x: adj_list[i]){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
