#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;


int main() {
	int n;
	cin >> n;
	vector<int> h(n);
	rep(i,n){
		cin >>h[i];
	}
	int currentMax=h[0];
	int ans=0;
	rep(i,n){
		if(h[i]>=currentMax){
			ans++;
		}
		currentMax = max(h[i],currentMax);
	}
	cout << ans << endl;
	return 0;
}
