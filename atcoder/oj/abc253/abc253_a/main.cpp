#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;
const std::string YES = "Yes";
const std::string NO = "No";

int main() {
	int a,b,c;
	cin >>a>>b>>c;
	if((a<=b && b<=c) || (c<=b&& b<=a)){
		cout << YES << endl;
	} else{
		cout << NO << endl;
	}

	return 0;
}
