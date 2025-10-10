#include<bits/stdc++.h>
using namespace std;
// Adjacency Matrix

/* input
7 7
0 1
1 3
1 4
3 2
4 6
3 5
4 5
*/

int main(){
    int n, e; // adj_mat
    cin >> n >> e;

    int adj_mat[n][n]; // = {0}; = memset
    // for(int i = 0; i < n; i += 1){ // = memset
    //     for(int j = 0; j < n; j += 1) adj_mat[i][j] = 0;
    // }
    memset(adj_mat, 0, sizeof(adj_mat));
    for(int i = 0; i < n; i += 1){      //          1st diag. to 1
        for(int j = 0; j < n; j += 1) if(i == j) adj_mat[i][j] = 1;
    }
    for(int i = 0; i < n; i += 1){
        int a,b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1;
    }
    for(int i = 0; i < n; i += 1){ // = memset
        for(int j = 0; j < n; j += 1){
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// Output
/*
1 1 0 0 0 0 0
1 1 0 1 1 0 0
0 0 1 1 0 0 0
0 1 1 1 0 1 0
0 1 0 0 1 1 1
0 0 0 1 1 1 0
0 0 0 0 1 0 1
*/


