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
	int n;
    cin>>n;
    vector<int> h(n);
    rep(i,0,n){
        cin >> h[i];
    }
  
    vector<int> dp(n);
    dp[0] = 0;
    //dp[i]:= i番目までに払うコストの総和の最小値
    rep(i,1,n){
        if(i>=2)dp[i]=min(dp[i-1]+abs(h[i-1]-h[i]),dp[i-2]+abs(h[i-2]-h[i]));
        else dp[i]=dp[i-1]+abs(h[i-1]-h[i]);
        // cout << dp[i] << endl;
    }
    cout << dp[n-1] << endl;

    return 0;
}