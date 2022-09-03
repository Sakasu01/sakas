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
const ll INF = 1LL << 60;

struct Edge {
    int to, cost, id;
    Edge(int to, int cost):
        to(to), cost(cost) {};
};

//重み付きグラフを表す型
using Graph = vector<vector<Edge>>;

//緩和を実施する関数
template<class T> bool chmin(T& a, T b){
    if(a>b){
        a = b;
        return true;
    }
    else return false;
}

int main(){
    //頂点数、辺数、始点
    int n,m,s;
    cin >> n >> m >> s;
    Graph g(n);
    rep(i,0,m){
        int a,b,w; cin>>a>>b>>w;
        --a; --b;
        g[a].emplace_back(b,w);
    }

//dijkstra法
    vector<bool> used(n, false);
    vector<ll> dist(n,INF);
    dist[0] = 0; //始点の距離は0
    rep(iter, 0, n){
        //使用済みでない頂点のうち、dist値が最小の頂点を探す
        ll min_dist = INF;
        int min_v =  -1;
        rep(v,0,n){
            if(!used[v] and dist[v] < min_dist){
                min_dist = dist[v];
                min_v = v;
            }
        }
        if(min_v == -1) break; 
        for(auto e : g[min_v]){
            chmin(dist[e.to], dist[min_v] + e.cost);
        }
        used[min_v] = true; //min_vを使用済みにする
    }

    rep(v,0,n){
        if(dist[v] < INF) cout << dist[v] << endl;
        else cout << "INF" << endl;
    }


    return 0;
}