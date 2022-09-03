#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;
// #define rep(i,n) for(ll i=0; i<(n); ++i) 
#define Out(x) cout << x << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define Ans cout << ans << endl
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define INF 1e11+7
using ll = long long;
using P = pair<string,string>;
// const ll mod = 10e9+7;
template<class T> inline bool chmax(T& a,T b) {if(a>b){a=b;return 1;} return 0;}
template<class T> inline bool chmin(T& a,T b) {if(a>b){a=b;return 1;} return 0;}

int main(){
    int n,w; cin>>n>>w;
    vector<ll> m(102,0), v(n+1,0);
    rep(i,1,n+1){
        cin >> m[i] >> v[i];
    } 
    vector<vector<ll>> dp(102,vector<ll>(1e5 + 2));
    rep(i,0,102) rep(j,0,1e5 + 2) {dp[i][j] = INF;}
    dp[0][0] = 0;
    // dp[i][j] := i番目に価値がjであるときの重さの最小値 
    for(int i=1; i<=n; i++){
        for(int j=0; j<1e5 + 2; j++){
            dp[i][j] = (j-v[i]>=0) ? min(dp[i-1][j], dp[i-1][j-v[i]] + m[i]) : dp[i-1][j];
        }
    }
    ll ans = 0;
    rep(i,1,100001){
        if(dp[n][i]<=w) ans = i;
    }
    cout << ans << endl;

    // rep(i,0,n){
    //     rep(j,0,3){
    //         cerr << dp[i][j] << ",";
    //     }
    //     cerr << endl;
    // }
    // cout <<dp[n][W] << endl;

    return 0;
}