#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;


int main() {
	int n,k, h;
	cin >> n >> k;
	vector<ll> h(n+1);
	// sum[0] = 0;
	rep(i,n){
		cin >> h[i];
		// sum[i+1] = sum[i] + h;
	}
	ll ans = 1e9+7;
	rep(i,n){
		ans = ans > abs(h[i+1]-h[i]) ?  abs(h[i+1]-h[i]) : ans;
	}
	cout << ans << endl;
	return 0;
}
