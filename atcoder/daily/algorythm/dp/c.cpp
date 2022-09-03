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
	int n,ans=0;
    cin>>n;
    vector<int> a(n),b(n),c(n);
    vector<vector<int>> dp(n, vector<int>(3, 0));
    rep(i,0,n){
        cin >> a[i] >> b[i] >> c[i];
    }
    // dp[i][j]:=i日目までの、i日目に活動jを選択しなかったときの幸福度の総和の最大値
    // 一つ前のdpのうち、今回選ぶ手を除いたものの最大値+
    //           i..i日目までの幸福度の最大値
    //           j..
    enum action{a=0,b=1,c=2};
    rep(i,0,n){
        if(i==0){
            dp[i][action::a] = max(b[i],c[i]);  
            dp[i][action::b] = max(a[i],c[i]);
            dp[i][action::c] = max(a[i],b[i]);
        } else {
            //i日目に活動Aを選んだ時のこれまでの幸福度の総和の最大値
            int Ai = dp[i-1][action::a] + a[i];
            int Bi = dp[i-1][action::b] + b[i];
            int Ci = dp[i-1][action::c] + c[i];
            dp[i][action::a] = max(Bi, Ci);  
            dp[i][action::b] = max(Ci, Ai);  
            dp[i][action::c] = max(Ai, Bi);    
        }
    }
    rep(i,0,n){
        rep(j,0,3){
            cerr << dp[i][j] << ",";
        }
        cerr << endl;
    }
    cout << max({dp[n-1][0],dp[n-1][1],dp[n-1][2]}) << endl;

    return 0;
}