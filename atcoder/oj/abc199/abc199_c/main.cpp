#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;


int main() {
	int n,q,t,a,b;
	string s;
	cin>>n>>s>>q;
	// multiset<int> st;
	string pre = s.substr(0,n);
	string post = s.substr(n);
	while(q--){
		cin>>t>>a>>b;
		a--;b--;

		if(t==1){
			if(a>=n){
				swap(post[a-n], post[b-n]);
			} else if(b<n){
				swap(pre[a], pre[b]);
			} else {
				swap(pre[a], post[b-n]);
			}
		} else {
			swap(pre,post);
		}
	}
	cout << pre << post << endl;
	return 0;
}
