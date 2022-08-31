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
    int n; cin >> n;
    char c;
    vector<vector<char>> table(n, vector<char> (9));
    rep(i,0,n){
        rep(j,0,9){
            cin >> table[i][j];
        }
    }
    int cnt = 0;
    rep(i,0,n){
        rep(j,0,9){
            if(table[i][j] == 'x') cnt++;
        }
    }
    cerr << "batsu: " << cnt << endl;

    bool maru = false;
    rep(i,0,9){
        rep(j,0,n){
            if(table[j][i]!='o'){
                maru = false;
            }
            if(!maru){
                if(table[j][i]=='o'){
                    cnt++;
                    maru = true;
                }
            }
        }
        maru = false;
    }
    cout << cnt << endl;

return 0;
}
