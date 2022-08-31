#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <queue>

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
using P = pair<string,string>;
// const ll mod = 10e9+7;

// void print_queue (queue<pair<int, int>> a){
//     cout << a.front.
// }

int main(){
   int a,b,c,d;
   cin >> a>>b>>c>>d;
   if(b>c && b<d){
    cout << b-c << endl;
   } else if(d<b && a<c) {
    cout << d-c << endl;
   } else if (b>d && a<d){
    cout << d-a << endl;
   } else if (a>c && d>b){
    cout << b-a << endl;
   } else {
    cout << 0 << endl;
   }
   return 0;
}

