#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <queue>
#include <tuple>

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
using P = pair<string,int>;
// const ll mod = 10e9+7;

int main(){
    int n,k; cin>>n>>k;
    if(n==1){
        cout << "Yes" << endl;
        return 0;
    }
    vector<int> a(n), b(n);
    vector<vector<bool>> dp(n, vector<bool>(2, false));
    rep(i,0,n){cin >> a[i];}
    rep(i,0,n){cin >> b[i];}
    
    enum index{ai, bi};
    //dp[i][j]:= i番目にjを選択したときにXが存在するかどうか
    //DPは1-indexで考えると分かりやすいことが多い
    //0番目のdpの値は単位元がうまくいくことが多い
    //初期条件は本質的にfor文の中に入れない
    dp[0][index::ai] = dp[0][index::bi] = true;
    rep(i,1,n-1){
        if(dp[i-1][index::ai]){
            if(abs(a[i]-a[i-1])<=k) dp[i][index::ai] = true;
            if(abs(b[i]-a[i-1])<=k) dp[i][index::bi] = true;
        }
        if(dp[i-1][index::bi]){
            if(abs(b[i]-b[i-1])<=k) dp[i][index::bi] = true;
            if(abs(a[i]-b[i-1])<=k) dp[i][index::ai] = true;
        }
    }
    if(dp[n-1][index::ai] || dp[n-1][index::bi]){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    

return 0;
}
