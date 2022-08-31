#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<ll,ll>;


int main() {
	ll n,t;
	string s;
	cin >> n;
	set<string> st; //文字列があるかどうかを判定したいときはsetを使うべし
	bool orig = false;
	int score = -1, ans = -1;
	rep(i,n){
		cin >> s >> t;
		if(st.count(s)==0) orig = true;
		st.insert(s);
		if(orig){
			if(score < t){
				score = t;
				ans = i+1;
			}
		}
		orig = false;
	}
	
	cout << ans << endl;
	return 0;
}
