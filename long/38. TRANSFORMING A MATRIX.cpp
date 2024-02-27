#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5][n+5], res = 0, h[n+5];
		for(int i=1; i<=n; i++){
			int sum = 0;
			for(int j=1; j<=n; j++){
				cin >> a[i][j];
				sum += a[i][j];
			}res = max(res, sum);
			h[i] = sum;
		}
		for(int i=1; i<=n; i++){
			int sum = 0;
			for(int j=1; j<=n; j++){
				sum += a[j][i];
			}res = max(res, sum);
		}int ans = 0;
		for(int i=1; i<=n; i++){
			ans += abs(res-h[i]);
		}cout << ans << endl;
	}
}