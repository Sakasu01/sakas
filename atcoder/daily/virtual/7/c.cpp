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
    int n;string s;
    cin >> n >> s;
    int ans = 0;
    rep(i,0,s.length()-2){
        int cntA = 0;
        int cntT = 0;
        int cntG = 0;
        int cntC = 0;
        rep(j,i,s.length()-1){
            if(s[j]=='A') cntA++;
            if(s[j]=='T') cntT++;
            if(s[j]=='G') cntG++;
            if(s[j]=='C') cntC++;
        }
        if(cntA == cntT)
    }
    cout << ans+1 << endl;
return 0;
}
