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
    ll n,c;
    cin >> n >> c;
    ll t,a;
    ll x = c;
	rep(i,0,n){
        cin >> t >> a;
        if(t==1) x = (x&a);
        else if(t==2) x = (x|a);
        else x = (x^a);
        cout << x << endl;
    }
}