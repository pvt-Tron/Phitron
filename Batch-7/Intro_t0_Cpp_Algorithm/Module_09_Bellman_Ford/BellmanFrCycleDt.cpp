#include <bits/stdc++.h>  // = ABOVE No Descriptions
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
int dis[1005];
vector<Edge> edge_list;
int n;
void short_dstBF(){
	for (int i = 1; i <= n - 1; i++){
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
void detect_Cycle_BF(){
	bool cycle = false;
	for (Edge ed : edge_list){
		int u, v, c;
		u = ed.u;
		v = ed.v;
		c = ed.c;
		if(dis[u] != INT_MAX && dis[u] + c < dis[v]){
			cycle = true;
			break;
		}
	}
	for(int i = 0; i < n; i++) cout << dis[i] << endl;
}

int main(){
	int e;
	cin >> n >> e;
	while (e--){
		int u, v, c;
		cin >> u >> v >> c;
		edge_list.push_back(Edge(u, v, c));

	}
	for(int i = 0; i < n; i++){
		dis[i] = INT_MAX;
	}
	short_dstBF();
	detect_Cycle_BF();

	return 0;
}


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
int main(){
	int n, e;
	cin >> n >> e;
	vector<Edge> edge_list;
	while (e--){
		int u, v, c;
		cin >> u >> v >> c;
		edge_list.push_back(Edge(u, v, c));
	}
	for (int i = 0; i < n; i++) dis[i] = INT_MAX;

	dis[0] = 0;

	for (int i = 1; i <= n - 1; i++){
		for (Edge ed : edge_list){
			int u, v, c;
			u = ed.u;
			v = ed.v;
			c = ed.c;
			if(dis[u] < INT_MAX && dis[u] + c < dis[v]) dis[v] = dis[u] + c;
		}
	}
	bool cycle = false;
	for (Edge ed : edge_list){  // Detect Negative wgt.Cycle with Bellman-Ford
		int u, v, c;
		u = ed.u;
		v = ed.v;
		c = ed.c;
		if(dis[u] < INT_MAX && dis[u] + c < dis[v]){
			cycle = true;
			break;
		}
	}
	if(cycle) cout << "Cycle found. No answer" << endl;
	else for(int i = 0; i < n; i++) cout << i << " -> " << dis[i] << endl;
	return 0;
}
