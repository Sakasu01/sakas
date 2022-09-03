#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <queue>

using namespace std;
// #define rep(i,n) for(ll i=0; i<(n); ++i)
#define Out(x) cout << x << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define Ans cout << ans << endl
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using ll = long long;
using P = pair<ll, ll>;
// const ll mod = 10e9+7;

struct Edge {
    int to, cost, id;
    Edge(int to, int cost, int id):
        to(to), cost(cost), id(id) {};
};

// vector<int> dijkstra(int s, vector<vector<edge>>&G){
//     vector<ll> dist(G.size(), 1LL<<60);
//     vector<int> idx(G.size());
//     dist[s] = 0;
//     priority_queue<P, vector<P>, greater<P>> pq;
//     pq.push({0,s});

//     while(!pq.empty()){
//         continue;
//     }
// };

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<Edge>> g(n);
    rep(i,0,m){
        int a,b,c; cin>>a>>b>>c;
        --a; --b;
        g[a].emplace_back(b,c,i+1);
        g[b].emplace_back(a,c,i+1);
    }

    const ll INF = 1e18;
    vector<ll> dist(n,INF);
    vector<int> from(n, -1);
    priority_queue<P,vector<P>, greater<P>> q; //dijkstra書くときのテンプレ
    dist[0] = 0;
    q.emplace(0,0);

    while(!q.empty()){
        auto [d,v] = q.top(); q.pop();
        if(dist[v] != d) continue;     //ここを忘れないように注意 実行時間が長くなる
        for(auto [u, cost, id] : g[v]){
            ll nd = d+cost;
            if(dist[u] <= nd) continue;
            dist[u] = nd;
            from[u] = id;
            q.emplace(nd, u);
        }
    }
    rep(i,1,n){
        cout << from[i] << endl;
    }


    return 0;
}