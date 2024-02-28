// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int check(ld a[], int n){
	for(int i=1; i<=n; i++){
		if(a[i] != 0) return 1;
	}return 0;
}

void solve(ld a[][105], int n, int m){
	for(int i=1; i<n; i++){
		int dk = 0 , pos = 0;
		for(int j=1; j<=m; j++){
			if(a[i][j] != 0){
				pos = j;
				dk = 1; break;
			}
		}if(dk==1){
			for(int j=i+1; j<=n; j++){
				ld tmp = a[j][pos] / a[i][pos];
				for(int k=pos; k<=m; k++){
					a[j][k] -= a[i][k] * tmp;
				}
			}
		}
	}int res = 0;
	for(int i=1; i<=n; i++){
		res += check(a[i], m);
	}cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		ld a[105][105];
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				cin >> a[i][j];
			}
		}solve(a, n, m);
	}
}