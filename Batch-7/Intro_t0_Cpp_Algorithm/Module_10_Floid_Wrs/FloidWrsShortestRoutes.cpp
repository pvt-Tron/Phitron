// CSES Shortest Routes II
/*
// // Input
4 3 5
1 2 5
1 3 9
2 3 3
1 2
2 1
1 3
1 4
3 2
// // Output
5
5
8
-1
3

*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){ // negative cycle detect with Floyd Warshall
    int n, e;
    cin>>n>>e;
    long long int adj_mat[n][n];
    for(int i=0; i<n; i++){
        // for(int j=0; j<n; j++) (i == j) ? adjMat[i][j] = 0 : adjMat[i][j] = INT_MAX;
         for(int j=0; j<n; j++){
			if(i == j) adj_mat[i][j] = 0;
			else adj_mat[i][j] = LLONG_MAX;
		}
	}
    while(e--){
        long long int a, b, c;
        cin>>a>>b>>c;

        adj_mat[a][b] = min(adj_mat[a][b], c);
        adj_mat[b][a] = min(adj_mat[a][b], c); // is Undirected

        for(int k = 1; k<=n; k++) {
             for(int i = 1; i<=n; i++) {
                 for(int j=1; j<=n; j++) {
                    if(adj_mat[i][k] != LLONG_MAX && adj_mat[k][j] != LLONG_MAX && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j]){
					    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                    }
                }
            }
        }
    }
	int q;
	cin >> q;
	while(q--){
		int s,d;
		cin >> s >> d;
		if(adj_mat[s][d] == LLONG_MAX) cout << -1 << endl;
		else cout << adj_mat[s][d] << endl;
	}

    return 0;
}
