#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;



int main() {
	int x;
	int ans=0;
	rep(i,5){
		cin >>x;
		ans++;
		if(x==0){
			cout << ans << endl;
			return 0;
		}
	}

	return 0;
}
