#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<string,string>;


int main() {
	vector<int> h(3), w(3);
	rep(i,3) cin>>h[i];rep(i,3) cin>>w[i];
	int a,b,c,d,e,f,g,x,y;
	int cnt=0;
	rep(i,min(h[0], w[0])){
		a = i;
		rep(j,min(h[1],w[0]-a)){
			b = j;
			rep(k,min((h[2],w[0]-a)){
				c = k;
				rep(l,min((h[0],w[1])){
					d = l;
					rep(m,min((h[1]-b,w[1]-d)){
						e = m;
						rep(n,min((h[2]-c,w[1]-e)){
							f = n;	
							rep(o,min((h[0]-d,w[2])){
								g = o;
								rep(p,min((h[1]-e,w[2]-g)){
									x = p;
									rep(q,min((h[2]-f,w[2]-h)){
										z = q;
										cnt++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
