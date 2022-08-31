#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;


int main() {
		ll n,sum;
	cin >> n >> sum;
	rep(x,n+1){
		rep(y,n-x+1){
			int z = n-x-y;
			if(z>=0){
				if(10000*x+5000*y+1000*z == sum){
					cout <<x<<" "<<y<<" "<<z << endl;
					return 0;
				}
			}
		}
	}
	cout << -1 <<" " << -1 << " " << -1 << endl; 	
	return 0;
}


