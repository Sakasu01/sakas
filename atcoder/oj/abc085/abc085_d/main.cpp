#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;


int main() {
	ll n,h;
	cin >> n >> h;
	vector<ll> a(n), b(n);
	rep(i,n){
		cin >> a[i] >> b[i];
	}
	ll maxOfA = -1000000;
	rep(i,n){
		maxOfA = max(maxOfA, a[i]);
	}
	vector<int> v;
	rep(i,n){
		if(maxOfA < b[i]){
			v.push_back(b[i]);
		}
	}
	sort(v.begin(), v.end(), greater<int>());
	ll ans = 0;
	for(auto &x:v){
		h -= x;
		ans++;
		if(h<=0){
			cout << ans << endl;
			return 0;
		}
	} 
	ans += (h + maxOfA - 1)/maxOfA;
	
	cout << ans << endl;



	return 0;
}
