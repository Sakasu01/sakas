#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>

// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
// #define rep(i,n) for(ll i=0; i<(n); ++i) 
#define Out(x) cout << x << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define Ans cout << ans << endl
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
# define __ASSERT_VOID_CAST static_cast<void>
# define assert(expr)	(__ASSERT_VOID_CAST (0))
using ll = long long;
using P = pair<string,string>;
// const ll mod = 10e9+7;
struct dsu {
  public:
    dsu() : _n(0) {}
    dsu(int n) : _n(n), parent_or_size(n, -1) {}

    int merge(int a, int b) {
        assert(0 <= a && a < _n);
        assert(0 <= b && b < _n);
        int x = leader(a), y = leader(b);
        if (x == y) return x;
        if (-parent_or_size[x] < -parent_or_size[y]) std::swap(x, y);
        parent_or_size[x] += parent_or_size[y];
        parent_or_size[y] = x;
        return x;
    }

    bool same(int a, int b) {
        assert(0 <= a && a < _n);
        assert(0 <= b && b < _n);
        return leader(a) == leader(b);
    }

    int leader(int a) {
        assert(0 <= a && a < _n);
        if (parent_or_size[a] < 0) return a;
        return parent_or_size[a] = leader(parent_or_size[a]);
    }

    int size(int a) {
        assert(0 <= a && a < _n);
        return -parent_or_size[leader(a)];
    }

    std::vector<std::vector<int>> groups() {
        std::vector<int> leader_buf(_n), group_size(_n);
        for (int i = 0; i < _n; i++) {
            leader_buf[i] = leader(i);
            group_size[leader_buf[i]]++;
        }
        std::vector<std::vector<int>> result(_n);
        for (int i = 0; i < _n; i++) {
            result[i].reserve(group_size[i]);
        }
        for (int i = 0; i < _n; i++) {
            result[leader_buf[i]].push_back(i);
        }
        result.erase(
            std::remove_if(result.begin(), result.end(),
                           [&](const std::vector<int>& v) { return v.empty(); }),
            result.end());
        return result;
    }

  private:
    int _n;
    std::vector<int> parent_or_size;
};


struct V {
    ll x,y;
    V(ll x=0, ll y=0): x(x), y(y) {};
};

int main(){
    int n; cin >> n;
    V s,t;
    cin >> s.x >> s.y >> t.x >> t.y;
    // cout << s.x << s.y << t.x << t.y << endl;
    vector<V> o(n);
    vector<ll> r(n);
    rep(i,0,n){
        cin >> o[i].x >> o[i].y >> r[i];
    }
    auto pow2 = [](ll x) {return x*x;};
    auto dist = [&](V a, V b){
        return pow2(a.x-b.x) + pow2(a.y-b.y);
    };
    int si=0, ti=0;
    rep(i,0,n){
        if(dist(s, o[i]) == pow2(r[i])){ si = i; }
        if(dist(t, o[i]) == pow2(r[i])){ ti = i; }
    }
    dsu uf(n);
    rep(i,0,n){
        rep(j,0,i){
            ll d = dist(o[i], o[j]);
            ll r1 = r[i], r2 = r[j];
            if(r1 > r2) swap(r1, r2);
            if(d > pow2(r1 + r2)) continue;
            if(d < pow2(r1 - r2)) continue;
            uf.merge(i,j);
        }
    }
    if(uf.same(si, ti)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

