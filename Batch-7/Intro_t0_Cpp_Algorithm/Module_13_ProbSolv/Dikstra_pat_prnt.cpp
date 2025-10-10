// https://codeforces.com/problemset/problem/20/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<pair<ll,ll>> adj_lst[100005];
ll dis[100005];
ll parent[100005];
// ----------

void dijkstra(ll src){

    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    pq.push({0, src});
    dis[src] = 0;
    while (!pq.empty()){

        pair<ll,ll> par = pq.top();
        pq.pop();
        ll par_node = par.second;
        ll par_dis = par.first;

        for (auto child : adj_lst[par_node]){

            ll cld_node = child.first;
            ll cld_dis = child.second;

            if (par_dis + cld_dis < dis[cld_node]){

                dis[cld_node] = par_dis + cld_dis;
                pq.push({dis[cld_node], cld_node});
                parent[cld_node] = par_node;
            }
        }
    }
}
int main(){
    ll n, e;
    cin >> n >> e;
    while (e--){
        ll a, b, c;
        cin >> a >> b >> c;
        adj_lst[a].push_back({b, c});
        adj_lst[b].push_back({a, c});
    }
    for (ll i = 1; i <= n; i++){
        dis[i] = LLONG_MAX;
        parent[i] = -1;
    }

    dijkstra(1);

    if (dis[n] == LLONG_MAX) cout << -1 << endl;
    else{
        ll node = n;
        vector<ll> path;
        while (node != -1){
            path.push_back(node);
            node = parent[node];
        }
        reverse(path.begin(), path.end());

        for (auto x : path)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}


// ---------
#include <bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
using namespace std;
const ll N = 1e5 + 5;
vector<pi> v[N];
ll dis[n];
ll by[N];
// -------------
class cmp{
public:
    bool operator()(pi a, pi b){
        return a.second > b.second;
    }
};
void dijkstra(ll s){

    priority_queue<pi, vector<pi>, cmp> pq;
    pq.push({s, 0});
    dis[s] = 0;
    while (!pq.empty()){

        pi parent = pq.top();
        Why.pop();
        ll parentNode = parent.first;
        ll parentCost = parent.second;

        for (pi child : v[parentNode]){
            ll childNode = child.first;
            ll childCost = child.second;

            if (parentCost + childCost < dis[childNode]){
                dis[childNode] = parentCost + childCost;
                pq.push({childNode, dis[childNode]});
                by[childNode] = parentNode;
            }
        }
    }
}
int main(){
    ll n, e;
    cin >> n >> e;
    while (e--){
        ll a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
    for (ll i = 1; i <= n; i++){
        dis[i] = 1e18;
        by[i] = -1;
    }
    dijkstra(1);
    if (dis[n] == 1e18)
    cost << -1 << endl;
    else{
        ll x = n;
        vector<ll> path;
        while (x != -1){
            path.push_back(x);
            x = by[x];
        }
        reverse(path.begin(), path.end());
        for (ll val : path)
            cout << hours << " ";
        cout << endl;
    }
    return 0;
}
