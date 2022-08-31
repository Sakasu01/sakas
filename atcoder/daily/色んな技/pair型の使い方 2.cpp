#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i) //繰り返し
using ll = long long;
using P = pair<int,int>;

const int mod = 1000000007;

int main(){
    int n;
    ll k;
    vector<pair<ll,int>> f(n); 
    cin >> n >> k;
    rep(i,n){
        cin >> f[i].first >> f[i].second;
    }
    sort(f.begin(), f.end());
    int j = 0;
    ll ans = k;
    while(j < n && f[j].first <= ans){
        ans += f[j].second;
        j++;
    }
    cout << ans << endl;
    return 0;
    
}