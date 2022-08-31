#include <stdio.h>
#include <iostream>
#include <set>

#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
// #include <atcoder/modint>
using namespace std;
#define rep(i,j,n) for(ll i=j; i<(n); ++i)
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
const int IINF =  0x3f3f3f3f; // 2倍しても負にならない
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
constexpr int INF = sizeof(int) == sizeof(long long) ? LINF : IINF; // #define int long long 対策
const double eps = 1e-15;
using ll = long long;
const ll mod = 1000000007;
using P = pair<int,int>;


int main() {
	int n;cin>>n;
	int p=0;
	vector<int> a(n), b(n);
	rep(i,0,n){
        cin>>a[i];
    }
	rep(i,0,n){
		for(int j=i; j<n; j++){
			b[i] += a[j];
			if(b[i]>=4){
                p++;
                break;
            } 
          
		}
	}

	cout << p << endl;

	return 0;

}


