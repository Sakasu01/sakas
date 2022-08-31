#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<=(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;


int main() {
	int n;cin >>n;
	cout << 2*n << endl;
	if(n%4==0) {
		rep(i,(n/4)-1){
			cout << 4;
		}
	} else if((n-1)%4==0) {
		cout << 1;
		rep(i,(n-1)/4 -1){
			cout << 4;
		}
	} else if((n-2)%4==0) {
		cout << 2;
		rep(i,((n-2)/4-1)){
			cout << 4;
		}
	} else if((n-3)%4==0) {
		cout << 3;
		rep(i,((n-3)/4-1)){
			cout << 4;
		}
	}
	return 0;
}
