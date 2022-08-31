#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i) //繰り返し
using ll = long long;
using P = pair<int,int>;

const int mod = 1000000007;

int main(){
    int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> ans(n, k/n); // == ans(n)\n rep(i,n) ans[i] = k/n;同じ。
    //だが同じ要素を全部に入れる場合には、コンストラクタを第二引数に入れてしまうのが楽
    k %= n; //引き算で進行するループは商と余りで管理。
    vector<P> p(n); //int型を二つ引数に取るpair型でp(n)を宣言
    rep(i,n) p[i] = P(a[i], i); //pair型でi番目とi番目の人の数値を同時に管理
    sort(p.begin(), p.end()); //a[i]に合わせたソート
    rep(i,k) ans[p[i].second]++; //i番目にあたる人が受け取る飴の個数
    rep(i,n) cout << ans[i] << endl;
    return 0;
}