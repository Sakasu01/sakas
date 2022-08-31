#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;
const std::string YES = "Yes";
const std::string NO = "No";

int main() {
	int n,a;
	cin>>n;
	rep(i,n){
		cin >> a;
		if(a%2==0){
			if(a%3==0||a%5==0){
				continue;
			} else {
				cout <<"DENIED"<<endl;
				return 0;
			}
		}
	}
	cout <<"APPROVED"<<endl;

	return 0;

	
}
