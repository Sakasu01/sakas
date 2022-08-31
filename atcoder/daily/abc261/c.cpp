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

int main(){
	int n;cin >> n;
	vector<string> a(n);
	rep(i,0,n){
		cin >> a[i];
	}
	map<string, int> mp;
	rep(i,0,n){
		cout << a[i];
		// if(mp[a[i]]==0) {
		// 	mp[a[i]]++;
		// 	cout <<endl;
		// 	continue;
		// }
		if(mp[a[i]]!=0) cout << "("<< mp[a[i]] << ")" << endl;
		else cout << endl;
		mp[a[i]]++;
	}
}