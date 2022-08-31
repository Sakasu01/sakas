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
#define Yes "Yes"
#define No "No"
#define Ans cout << ans << endl
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using ll = long long;
using P = pair<long, char>;
const ll INF = 1e18;
// const ll mod = 10e9+7;

int main(){
    ll n; cin >> n;
    vector<ll> t(n), x(n), a(n);
    rep(i,0,n){
        cin >> t[i] >> x[i] >> a[i];
    }
    vector<vector<ll>> dp(5, vector<bool> (2));
    //dp[i][j]:=i番目にjの地点にいるときのすぬけ君の大きさの最大値
    rep(i,0,n){
        dp[0][i] == 0;
    }

}