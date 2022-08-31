#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;\

constexpr array<pair<int, int>, 4> dydx4 = {{{1, 0}, {0, 1}, {-1, 0}, {0, -1}}};

int main() {
	int r,c; cin >> r >> c;
	int si, sj, gi, gj;
	cin >> si >> sj >> gi >> gj; si--, sj--, gi--; gj--;
	vector<vector<int>> dist(r, vector<int>(c, -1));
	vector<string> s(r);
	rep(i,r){
		cin >> s[i];
	}
	deque<pair<int, int>> wait;
	wait.push_back({si, sj});
	dist[si][sj] = 0;
	while(not wait.empty()){
		int i = wait.back().first;
		int j = wait.back().second;
		wait.pop_back();
		
		for(auto [di, dj] : dydx4){
			int ni = i + di;
			int nj = j + dj;
			if(ni < 0 or ni >= r or nj < 0 or nj >= c) continue;
			if(s[ni][nj] == '#') continue;
			if(dist[ni][nj] != -1) continue;
			dist[ni][nj] = dist[i][j] + 1;
			wait.push_front({ni, nj});
		}
	}
	cout << dist[gi][gj] << endl;
	

	return 0;
}
