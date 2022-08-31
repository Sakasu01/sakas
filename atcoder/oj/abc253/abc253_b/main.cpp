#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;


int main() {
	int h,w;
	cin>>h>>w;
	string s;
	vector<int> b(h*w+1);
	int c=0;
	rep(i,h){
		cin >> s;
		rep(j,w){
			if(s[j] == 'o'){
				b[c] = i+1;
				c++;
				b[c] = j+1;
				c++;
			}
		}
	}
	// cout << b[0] << b[1] << b[2] << b[3] << endl;
	cout << abs(b[0]-b[2]) + abs(b[1]-b[3]) << endl;

	return 0;
}
