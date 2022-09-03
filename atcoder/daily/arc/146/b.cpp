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


int ans = 0, n; 
vector<int> p(50+2);

void rec(int i){
	ans++;
	if(i == 1){
		return ;
	}
	rec(p[i]);
}

int main(){
	cin >> n; 
	rep(i,2,n+1){
		cin >> p[i];
	}
	int i = p[n];
	while(i!=1){
		ans++;
		// cout << i << endl;
		i = p[i];
	}

	cout << ans+1 << endl;
	
    return 0;
}
