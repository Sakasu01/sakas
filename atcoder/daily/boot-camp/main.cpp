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
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define fore(i, a) for (auto &i : a)
using ll = long long;
using P = pair<int, int>;
// const ll mod = 10e9+7;

//典型的なdx, dyの扱い
int dx[3]={-1,0,1}, dy[3]={-1,0,1};

int main(){
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N, ans = 0;
    string S;
    cin >> N >> S;
    rep(i, 0, N) {
        vector<bool> A(26, false), B(26, false);
        rep(j, 0, N) {
            if (j < i) A[S[j] - 'a'] = true;
            else B[S[j] - 'a'] = true;
        }
        int C = 0;
        rep(j, 0,26) C += A[j] && B[j];
        ans = max(ans, C);
    }
    cout << ans << endl;
    return 0;
}