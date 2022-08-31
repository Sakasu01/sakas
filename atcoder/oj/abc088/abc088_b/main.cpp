#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;


int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	int aliceSum = 0, bobSum = 0;
	rep(i,n) cin>>a[i];
	sort(a.begin(), a.end(), greater<int>());
	rep(i,n){
		if(i%2==0){
			aliceSum += a[i];
		} else {
			bobSum += a[i];
		}
	}
	cout << aliceSum - bobSum << endl;
	return 0;
}
