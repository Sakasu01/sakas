#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;


int main() {
	int k;
	cin>>k;
	if(k>=60){
		if(k-60 <10)cout << 21+k/60 << ":" <<0<< k-60; 
		else cout << 21+k/60 << ":" << k-60; 
	} else {
		if(k<10) cout << 21 << ":" << 0<<k;
		else cout << 21 << ":" << k;
	}
	return 0;
}
