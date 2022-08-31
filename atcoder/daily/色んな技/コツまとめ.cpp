ll changeChartoNum(char c){
    char s[11] = {'0','1','2','3','4','5','6','7','8','9'};
    int i=0; ll num=0;
    while(s[i]!='\0'){
        if(c == s[i]) {
            num = i; break;
        }
        i++;
    }
    return num;
}
// dp
vector<vector<bool>> dp(n+1, vector<bool>(x+1,false));
	dp[0][0] = true;
	rep(i,n){
		rep(j,x+1){
			if(dp[i][j]){
				if(j+a[i]<=x){
					dp[i+1][j+a[i]]=true;
				}
				if(j+b[i]<=x){
					dp[i+1][j+b[i]]=true;
				}
			}
		}
	}
	cout << (dp[n][x] ? "Yes" : "No") << endl;
	
int main(){
    int n;
	cin >> n;
	vector<int> h(n),dp(n);
	rep(i,n) cin >> h[i];
	dp[0]= 0;
	dp[1]= abs(h[0]-h[1]);
	rep(i,n-2){
		dp[i+1] = min(dp[i]+abs(h[i+2]-h[i]),dp[i+1]+abs(h[i+2]-h[i+1]));
	}
	cout << dp[n-1] << endl;
}




    


