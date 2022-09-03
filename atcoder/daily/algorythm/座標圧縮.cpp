#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i) //繰り返し

vector<int> compress(vector<int> a){ //座標圧縮
    int n = a.size();
    map<int,int> mp; //連想配列クラスmap...key,valueの順で、keyからvalueを高速検索O(log N)(∵mapは二分木だから(?)) mpはオブジェクト。
    rep(i,n) mp[a[i]]=0; //行列のサイズをn→端っこまでに圧縮 a[0]=1の時mp[1]=0 取り合えずaで値があった場所だけ確保
    int id = 1;
    for(auto& p : mp){  //aout..型推論。範囲for文..配列mpを全部操作できる。
        p.second = id++; //idを入れてからインクリメント keyは.firstで、valueは.secondに当たる
    }
    rep(i,n) a[i] = mp[a[i]]; //aを上書き
    return a;
}
int main(){
    int h,w,n;
    cin >> h >> w >> n;
    vector<int> a(n), b(n); //配列に入れる
    rep(i,n){
        cin >> a[i] >> b[i]; 
    }
    a = compress(a);
    b = compress(b);
    rep(i,n){
        printf("%d %d\n", a[i], b[i]);
    }
    return 0;
}
//コンテナクラス..クラスなどを複数入れられる入れ物。ex)vector, array
//iterator..抽象化されたポインタ。コンテナの要素を指す。