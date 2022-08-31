#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;


int main() {
	ll n,q; cin >> n >> q;
	string s; cin >> s;
	int cnt=0;
	while(q--){
		int t,x; cin >> t >> x;
		if(t==1) cnt = (cnt + x) % n;
        else cout << s[(x-1-cnt+n)%n] << '\n';
	}

	return 0;
}
