// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int r[1005][1005], m = 1000000007;
// r[i][j] : to hop chap j cua i 
void solve(){
	for(int i=0; i<=1000; i++){
		for(int j=0; j<=i; j++){
			if(j==0 || j==i){
				r[i][j] = 1;
			}else{
				r[i][j] = r[i-1][j-1] + r[i-1][j];
				r[i][j] %= m;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	solve();
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		cout << r[n][k] << endl;
	}
}