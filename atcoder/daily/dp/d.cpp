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
using ll = long long;
using P = pair<string,string>;
// const ll mod = 10e9+7;
template<class T> inline bool chmax(T& a,T b) {if(a>b){a=b;return 1;} return 0;}
template<class T> inline bool chmin(T& a,T b) {if(a>b){a=b;return 1;} return 0;}

int main(){
    int n,w;
    cin>>n>>w;
    vector<ll> m(n+1,0);
    vector<ll> v(n+1,0);
 
    for(int i=1;i<=n;i++){
        cin>>m[i]>>v[i];
    }
 
    vector<vector<ll>> dp(n+1,vector<ll>(w+1,0));
    //dp[i][j] := i番目に重さがjであるときの価値の最大値 
    for(int i=1; i<=n; i++){
        for(int j=0; j<=w; j++){
            dp[i][j] = dp[i-1][j]; //取り合えず取らなかった状態で更新
            if(j-m[i]<0) continue;
            dp[i][j] = max(dp[i-1][j], dp[i-1][j-m[i]] + v[i]); //左が取らないとき(重さはと価値はそのまま)
        }
    }
 
    cout<<dp[n][w]<<endl;

    // rep(i,0,n){
    //     rep(j,0,3){
    //         cerr << dp[i][j] << ",";
    //     }
    //     cerr << endl;
    // }
    // cout <<dp[n][W] << endl;

    return 0;
}