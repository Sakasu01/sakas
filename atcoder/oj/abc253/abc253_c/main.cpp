#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<ll,ll>;


int main() {
	int q;
	cin >>q;
	multiset<int> st;
	while(q--){
		int t; cin >> t;
		if(t==1){
			int x; cin >> x;
			st.insert(x);
		} else if(t==2) {
			int x, c; cin >> x >> c;
			while(c-- and st.find(x) != st.end()){
				st.erase(st.find(x));
			}
		} else {
			// sort(st.begin(), st.end());
			cout << *st.rbegin() - *st.begin() << endl;
		}
	}



	return 0;
}
