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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
using ll = long long;
using P = pair<string, string>;
// const ll mod = 10e9+7;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b > c && b <= d && a<=c){
        cout << b - c << endl;
    }
    else if (d <= b && a <= c)
    {
        cout << d - c << endl;
    }
    else if (b >= d && a <= d && a>=c)
    {
        cout << d - a << endl;
    }
    else if (a > c && d > b)
    {
        cout << b - a << endl;
    }
    else if (a == b && c == d)
    {
        cout << b - a << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}