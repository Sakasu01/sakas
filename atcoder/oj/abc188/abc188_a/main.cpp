#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;
const std::string YES = "Yes";
const std::string NO = "No";

int main() {
	int x,y;
	cin>>x>>y;
	if(min(x,y)+3>max(x,y)){
		cout <<"Yes" << endl;
	} else {
		cout <<"No"<<endl;
	}
	
	return 0;
}
