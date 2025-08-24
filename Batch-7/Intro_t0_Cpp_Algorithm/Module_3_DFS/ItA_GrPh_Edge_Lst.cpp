#include<bits/stdc++.h>
using namespace std;
// Edge List for GRAPH
/* input
5 5
0 1
0 2
3 0
1 3
3 4
*/
int main(){
    int n, e; // edg_lst
    cin >> n >> e;
    vector<pair <int, int>> edg_lst; // array of vector

    while(e--){
        int a,b;
        cin >> a >> b;
        edg_lst.push_back({a,b});
    }
    for(auto j : edg_lst){
        cout << j.first << " " << j.second << endl;
    }

    return 0;
}
// Edge List Output
/*
0 1
0 2
3 0
1 3
3 4
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
