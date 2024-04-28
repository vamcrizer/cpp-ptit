#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void tichchap(int a[501][501], int n, int m, int k){
	int b[501][501];
	a[0][0] = b[0][1] = b[1][0] = b[0][0] = 0;
	// prefix sum
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			b[i][j] = a[i][j] + b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
		}
	}
	for(int i = 1; i <= n - k + 1; i++){
		for(int j = 1; j <= m - k + 1; j++){
			double sum = b[i + k - 1][j + k - 1] - b[i - 1][j + k - 1] - b[i + k - 1][j - 1] + b[i - 1][j - 1];
			sum = sum / (k * k);
			cout << (int) sum << " ";
		}
		cout << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		int a[501][501];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		tichchap(a, n, m, k);
	}
	// Biden
	return 0;
}
