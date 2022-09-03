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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using ll = long long;
using P = pair<ll, ll>;
// const ll mod = 10e9+7;

int main(){
    int n; cin>>n;
    string a ;
    vector<string> b(n);
    vector<P> p(n);
    rep(i,0,n){
        cin >> a;
        b[i] = a;
    }
    sort(b.begin(), b.end(), greater<string>());
    cerr <<"reorder: "<< b[0] <<"|" <<b[1]<<"|" << b[2] << endl; 

    string Max = "";
    rep(i,0,3){
        Max = max({b[i]+b[(i+1)%3]+b[(i+2)%3],b[i]+b[(i+2)%3]+b[(i+1)%3], Max});
    }
    cout << Max << endl;
    return 0;
}