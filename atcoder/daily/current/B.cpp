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
	cin >> a >> b >>d;
	double aa = a, bb = b;
	a = a*cos(d * (M_PI / 180))-b*sin(d * (M_PI / 180));
	b = aa*sin(d * (M_PI / 180))+bb*cos(d * (M_PI / 180));
	cout << setprecision(15) << a <<" "<< b << endl;

    return 0;
}