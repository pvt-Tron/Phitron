#include<bits/stdc++.h>
using namespace std;
class Edge{
    public:
        int a, b, w;
        Edge(int a, int b, int w){
            this->a = a;
            this->b = b;
            this->w = w;
    }
}
// class cmp{
//     public:
//     bool operator()(Edge &x, Edge &y){
//         return x.w < y.w;
//     }
// };
bool cmp(Edge l, Edge r){
    return l.w < r.w;
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edges_list;
    for (int i = 0; i < e; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        edges_list.push_back(Edge(a, b, w));
    }
    sort(edges_list.begin(), edges_list.end(), cmp);
    for(auto edge: edges_list){
        cout << edge.a << " ";
        cout << edge.b << " ";
        cout << edge.w << endl;
    }
    return 0;
}