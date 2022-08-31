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
    enum action{A=0,B=1,C=2};
    rep(i,0,n){
        if(i==0){
            dp[i][action::A] = a[i];
            dp[i][action::B] = b[i];
            dp[i][action::C] = c[i];
        }else{
            dp[i][action::A] = max(dp[i-1][action::B]+a[i], dp[i-1][action::C]+a[i]);
            dp[i][action::B] = max(dp[i-1][action::A]+b[i], dp[i-1][action::C]+b[i]);
            dp[i][action::C] = max(dp[i-1][action::A]+c[i], dp[i-1][action::B]+c[i]);
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