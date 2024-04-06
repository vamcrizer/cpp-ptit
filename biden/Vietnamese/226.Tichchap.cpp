#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll tichchap(int a[301][301], int r, int c, int b[4][4]){
	ll sum = 0;
	for(int i = r, id = 1; i <= r + 2; i++, id++){
		for(int j = c, jd = 1; j <= c + 2; j++, jd++){
			sum += a[i][j] * b[id][jd];
		}
	}
	return sum;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[301][301], kernel[4][4];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 1; i <= 3; i++){
			for(int j = 1; j <= 3; j++){
				cin >> kernel[i][j];
			}
		}
		ll sum = 0;
		for(int i = 1; i <= n - 2; i++){
			for(int j = 1; j <= m - 2; j++){
				sum += tichchap(a, i, j, kernel);
			}
		}
		cout << sum << endl;
	}
	// Biden
	return 0;
}

