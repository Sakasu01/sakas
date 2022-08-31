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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define INF 1e11+7
using ll = long long;
using P = pair<string,string>;
// const ll mod = 10e9+7;
template<class T> inline bool chmax(T& a,T b) {if(a>b){a=b;return 1;} return 0;}
template<class T> inline bool chmin(T& a,T b) {if(a>b){a=b;return 1;} return 0;}

//最長共通部分列問題 (英: Longest-common subsequence problem, LCS）
int main(){
    string s,t; cin >> s >> t;
    vector<vector<int>> dp(s.length()+1, vector<int> (t.length()+1, 0));
    //dp[i][j]:= sのi番目とtのj番目を選択した時の最長の部分文字列の長さ
    dp[0][0] = 0;
    rep(i,0,s.length()) rep(j,0,t.length()){   
        if(s[i]==t[j]){
            dp[i+1][j+1] = dp[i][j]+1;
        } else {
            dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
        }
    }
    cerr <<"lengthOfLCS: "<<dp[s.length()][t.length()] << endl;

    //復元 dp[i-1][j]->dp[i][j] or  dp[i][j-1]->dp[i][j] or  dp[i-1][j-1]->dp[i][j]
    int i=s.length(), j=t.length();
    string ans="";
    while(i>0&&j>0){
        if(dp[i][j] == dp[i-1][j]){
            i--;
        }
        else if(dp[i][j] == dp[i][j-1]){
            j--;
        }
        else if(dp[i][j] == dp[i-1][j-1]+1){
            ans += s[i-1];
            i--; j--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}