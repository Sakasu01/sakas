#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <queue>
#include <limits>
using namespace std;
// #define rep(i,n) for(ll i=0; i<(n); ++i)
#define Out(x) cout << x << endl
#define Yes "Yes"
#define No "No"
#define Ans cout << ans << endl
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using ll = long long;
using P = pair<long, char>;
const ll INF = 1ll << 60;
// const ll mod = 10e9+7

template <typename T>
struct BIT {
private: 
    vector<T> bit;
    int n;

public:
    BIT(int n):n(n) {
        bit.resize(n);
    }

    void add(int a, int w){
        for(int x=a; x<=n; x+= x & -x){
            bit[x] += w;
        }
    }

    int sum(int a){
        int ret = 0;
        for(int x = a; x>0; x-=x&-x){
            ret += bit[x];
        }
        return ret;
    }
};

int main(){
    int n; cin >> n;
    vector<int> v(n);
    rep(i,0,n){cin >> v[i];}
    ll ans=0;
    BIT b(n);
    rep(i,0,n){
        ans+=i-b.sum(v[i]);
        b.add(v[i], 1);
    }
    cout << ans << endl;
}