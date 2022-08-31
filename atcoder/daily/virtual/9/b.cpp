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

ll n; 
int main(){
	cin >> n;
	vector<int> b(n), c(n);
	// map<int, int> mp;
	rep(i,0,n){
		int a; cin>>a;
		c[a]++;
		if(c[a]!=1) continue;
		b[i] = a;
	}
	sort(b.begin(), b.end(), greater<int>());
	cout << b[1] << endl;
    return 0;
}