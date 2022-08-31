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
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define Ans cout << ans << endl
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
using ll = long long;
using P = pair<string,string>;
// const ll mod = 10e9+7;

template<class T> inline bool chmin(T& a,T b) {if(a>b){a=b;return 1;} return 0;}
void rec(int i, string s);

double a,b,d;
int main(){
	int n; cin >> n;
	vector<vector<char>> a(n, vector<char> (n));
	rep(i,0,n){
		rep(j,0,n){
			cin >> a[i][j];
		}
	}
	rep(i,0,n){
		rep(j,0,n){
			if((a[i][j]=='W'&&a[j][i]!='L') ||(a[i][j]=='L'&&a[j][i]!='W') || (a[i][j]=='D'&&a[j][i]!='D')){
				cout << "incorrect" << endl;
				return 0;
			}
		}
	}
	cout << "correct" << endl;
    return 0;
}