#include <bits/stdc++.h>
using namespace std;
#define rep(i,s,n) for(int i=(s); i<(n); ++i) 
using ll = long long;
using P = pair<int,int>;

int main() {
    // 座標圧縮したい数列
    vector<int> A = {8, 100, 33, 33, 33, 12, 6, 1211};
    // コピー
    vector<int> B = A;
    // B を小さい順にソート
    sort(B.begin(), B.end());
    // B から重複を除去する
    B.erase(unique(B.begin(), B.end()), B.end());
    // 座標圧縮した結果を求める
    vector<int> res(A.size());
    for (int i = 0; i < A.size(); ++i) {
        res[i] = lower_bound(B.begin(), B.end(), A[i]) - B.begin();
    }
    for (auto v: res) cout << v << ", ";
    cout << endl;
}

    