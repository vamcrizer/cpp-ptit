#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m, p;
	ll sum;
	cin >> n >> m >> p;
	int a[n][m], b[m][p];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
	for(int i = 0; i < m; i++)
		for(int j = 0; j < p; j++)
			cin >> b[i][j];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			sum = 0;
			for(int k = 0; k < m; k++) sum += 1ll * a[i][k] * b[k][j];
			cout << sum << " ";
		}
		cout << endl;
	}
	// Biden
	return 0;
}

