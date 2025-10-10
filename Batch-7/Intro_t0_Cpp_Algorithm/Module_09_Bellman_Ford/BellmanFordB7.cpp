// ---  ---  Bellman-Ford 1 ---  --- //
/* // input

4 4
1 3 3
2 1 2
0 2 5
0 3 12

*/

#include <bits/stdc++.h>   // O(V*E)
using namespace std;
class Edge{
public:
	int u, v, c;
	Edge(int u, int v, int c){
		this->u = u;
		this->v = v;
		this->c = c;
	}
};

// const int N = 1e5 + 5;
// int dis[N];
int dis[1005];  // O(V)
vector<Edge> edge_list;

void bellman_ford(){  // O(V*E)
	for (int i = 1; i <= n - 1; i++){  //O(N) -> O(V)
		for (Edge ed : edge_list){
			int u, v, c;
			u = ed.u;
			v = ed.v;
			c = ed.c;
			if(dis[u] != INT_MAX && dis[u] + c < dis[v]) dis[v] = dis[u] + c;
		}
	}
	for (int i = 0; i < n; i++) cout << i << " -> " << dis[i] << endl;
}
void detect_Cycle_BF(){  // O(V*E)
	bool cycle = false;
	for (Edge ed : edge_list){  // Detect Negative wgt.Cycle with Bellman-Ford
		int u, v, c;
		u = ed.u;
		v = ed.v;
		c = ed.c;
		if(dis[u] != INT_MAX && dis[u] + c < dis[v]){
			cycle = true;
			break;
		}
	}
	// print
	if(cycle) cout << "Cycle found. No answer" << endl;
	else for(int i = 0; i < n; i++) cout << i << " -> " << dis[i] << endl;
}

int main(){
	int n, e;
	cin >> n >> e;
	while (e--){     // O(E)
		int u, v, c;
		cin >> u >> v >> c;
		edge_list.push_back(Edge(u, v, c));
		// edge_list.push_back(Edge(v, u, c)); //add for Undirected

	}
	for(int i = 0; i < n; i++){
		dis[i] = INT_MAX;
	}
	bellman_ford();
	detect_Cycle_BF();
	// print

	return 0;
}
