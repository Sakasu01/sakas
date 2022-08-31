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

template<class T> inline bool chmin(T& a,T b) {if(a>b){a=b;return 1;} return 0;}

int main(){
	int n, k;
    cin>>n>>k;
    vector<int> h(n);
    rep(i,0,n) cin >> h[i];
    vector<int> dp(n, 1e9);
    dp[0] = 0;
    //dp[i]:= i番目までに払うコストの総和の最小値
    rep(i,0,n){
        if(i-k<=0){
            rep(j,0,i){
                dp[i] = min(dp[i], dp[j]+abs(h[i]-h[j]));
            }
        } else {
            rep(j,i-k,i){
                dp[i] = min(dp[i], dp[j]+abs(h[i]-h[j]));
            }
        }
    }

    cout << dp[n-1] << endl;

    return 0;
}