#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;


int main() {
	int a;
	cin>>a;
	int sum = 2;
	rep(i,a-1){
	sum *= 2;
	}
	cout << sum << endl;
	return 0;
}
