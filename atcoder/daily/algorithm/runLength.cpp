#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;
// #define rep(i,n) for(ll i=0; i<(n); ++i)
#define Out(x) cout << x << endl
#define Yes "Yes"
#define No "No"
#define Ans cout << ans << endl
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using ll = long long;
using P = pair<long, char>;
// const ll mod = 10e9+7;

vector<pair<char, int>> runLengthEncoding(const string& s) {
	int n = s.length();
	vector<pair<char, int>> res;
	char pre = s[0];
	int cnt = 1;
	rep(i, 1, n) {
		if (pre != s[i]) {
			res.emplace_back(pre, cnt);
			pre = s[i];
			cnt = 1;
		}
		else cnt++;
	}
	res.emplace_back(pre, cnt);
	return res;
}

string s,t;

string solve() {
	vector<pair<char, int>> vs = runLengthEncoding(s);
	vector<pair<char, int>> vt = runLengthEncoding(t);

	if(vs.size() != vt.size()) return No;

	int n=vs.size();
	rep(i,0,n){
		if(vs[i].first != vt[i].first) return No;
		if(vs[i].second > vt[i].second) return No;
		if(vs[i].second==1 && 1<vt[i].second) return No;
	}	
	return Yes;
}

int main(){
	cin >> s >> t;
	cout << solve() << endl;
}