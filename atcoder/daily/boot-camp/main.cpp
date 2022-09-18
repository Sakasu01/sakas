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

int dx[3]={-1,0,1}, dy[3]={-1,0,1};


int main(){
    int h,w; cin>>h>>w;
    vector<vector<char>> table(h, vector<char>(w));
    rep(i,0,h){rep(j,0,w){
        cin >> table[i][j];
    }}
    rep(i,0,h){rep(j,0,w){
        int cnt=0;
        if(table[i][j] == '#') continue;
        rep(k,0,3){
            rep(l,0,3){
                int x = j + dx[k];
                int y = i + dy[l];
                if(x<0||x>=w || y<0||y>=h) continue;
                if(table[y][x] == '#') cnt++;
            }
        }
        table[i][j] = char(cnt + '0');
    }}
    rep(i,0,h){rep(j,0,w){
        cout << table[i][j];
    }
    cout << endl;}
}