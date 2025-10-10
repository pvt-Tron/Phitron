* //   Single Source Shortest Distance   //

		- DSF            -O(V+E)
		- BSF            -O(V+E)
		- Dikstra        -O(ElogV) // best foor small
		- Bellman-Ford   -O(VE)    // best foor > 10^5
		- Floyd-Warshall -O(V^3) //  All Pair Shortest Distance
								 // Multiple Source

	//    Detect Negative Wheigted Cycles      //
		- BSF            -O(V+E)
		- Dikstra        -O(ElogV)
		- Bellman-Ford   -O(VE)
		- Floyd-Warshall -O(V^2)



//  ~ = infinite

	  0 1 2 3 4
	0 0 ~ ~ ~ ~
	1 ~ 0 ~ ~ ~
	2 ~ ~ 0 ~ ~
	3 ~ ~ ~ 0 ~
	4 ~ ~ ~ ~ 0

*/
// ---  --- Floyd Warshall 1 ---  --- //


#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){ // negative cycle detect with Floyd Warshall
    int n, e;
    cin>>n>>e;
    ll adjMat[n][n];
    for(int i=0; i<n; i++){
         // for(int j=0; j<n; j++) (i == j) ? adjMat[i][j] = 0 : adjMat[i][j] = INT_MAX;
        for(int j=0; j<n; j++){
			if(i == j) adjMat[i][j] = 0;
			else adjMat[i][j] = INT_MAX;
		}
	}
	while(e--){
	    int a, b, c;
	    cin>>a>>b>>c;
	    adjMat[a][b] = c;
	    // adjMat[b][a] = c; // add for Unodirected
	// for(int k=0; k<n; k++)
    //  for(int j=0; j<n; j++)
	//   	for(int i=0; i<n; i++)
	//			cout << i << " " << k << " " << j << nl;

    for(int k = 0; k<n; k++) {
        for(int i = 0; i<n; i++) {
            for(int j=0; j<n; j++) {
//	if(adjMat[i][k] != INT_MAX && adjMat[k][j] != INT_MAX && adjMat[i][k] + adjMat[k][j] < adjMat[i][j]){
					if(adjMat[i][k] + adjMat[k][j] < adjMat[i][j]){
                         adjMat[i][j] = adjMat[i][k] + adjMat[k][j];
                    }
                }
            }
        }
    }
	// cout<<"After Floyd Warshall"<<endl;

	// Cycle Detection Part //
	bool cycle = false;
    for(int i=0; i<n; i++){
        if (adjMat[i][i] < 0){
			cycle = true;
            break;
        }
    }
	if(cycle) cout<<"negative cycle detected"<<endl;
    else{
		for(int i=0; i<n; i++) {
         	for(int j=0; j<n; j++) {
            	if(adjMat[i][j] == INT_MAX) cout<<"~"<<" ";
				else cout<<adjMat[i][j]<<" ";
			}
        cout<<endl;
        }
	}
    return 0;
}
