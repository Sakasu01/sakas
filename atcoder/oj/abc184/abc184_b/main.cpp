#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;


int main() {
	int n,x;
	string s;
	cin >>n>>x>>s;
	int ans=0;
	rep(i,n){
		if(s[i]=='o') x++;
		else if(s[i]=='x' && x!=0) x--;
	}
	cout <<x<<endl;

	return 0;
}
