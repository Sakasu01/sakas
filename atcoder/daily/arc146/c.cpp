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
using P = pair<long, char>;
// const ll mod = 10e9+7;

int n,m, cnt=0;
vector<int> combination;
void dfs(int depth, int size, int min, int max) {
    if (depth == size) { //最後まで到達
        for (int i = 0; i < depth; i++) {
            cout << combination[i] << " ";
        }
        cout << endl;
    }
    else {
        for (int i = min; i <= max; i++) {
            combination[depth] = i;
            // i を i+1 に変更した
            dfs(depth+1, size, i+1, max);
        }
    }
}

int main(){
	cin >> n >> m;
	combination.resize(n);
	dfs(0, n, 1, m);
	
}