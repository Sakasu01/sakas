#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <deque>
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
using P = pair<int, int>;
// const ll mod = 10e9+7;

int n,m;
vector<P> p(4);
bool cross (int a, int b, int c,int d){
    cerr << a*d-b*c << endl;
    return a*d-b*c>=0 ? true : false; 
}

int main(){
	rep(i,0,4){
        cin >> p[i].first >> p[i].second;
    }
    bool convex = true;
    rep(i,0,4){
        convex *= cross(p[(i+1)%4].first-p[i%4].first,
                        p[(i+1)%4].second-p[i%4].second,
                        p[(i+3)%4].first-p[i%4].first,
                        p[(i+3)%4].second-p[i%4].second);
    }
   if(convex) cout << "Yes" << endl;
   else cout << "No" << endl; 

}