#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int x_4axis[] = {-1, 0, 0, 1};
int y_4axis[] = {0, -1, 1, 0};
int x_8axis[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y_8axis[] = {-1, 0, 1, -1, 1, -1, 0, 1};

// |---------------------------------\   B
// \ i-1 , j-1 | i-1 , j | i+1 , j+1 |   I
// |---------------------------------\   D
// \  i  , j-1 |  i  , j |  i  , j+1 |   E
// |---------------------------------\   N
// \ i+1 , j-1 | i+1 , j | i+1 , j+1 |   J
// |---------------------------------\   R
//                                       .

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n + 1][m + 1], dp[n + 1][m + 1] = {0};
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++)
				cin >> a[i][j];
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++)
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + a[i][j];
		ll anita_max_wynn = -1e9;
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++)
				for(int k = i; k <= n; k++)
					for(int l = j; l <= m; l++)
						anita_max_wynn = (anita_max_wynn < dp[k][l] - dp[k][j - 1] - dp[i - 1][l] + dp[i - 1][j - 1]) ? dp[k][l] - dp[k][j - 1] - dp[i - 1][l] + dp[i - 1][j - 1] : anita_max_wynn;
		cout << anita_max_wynn << endl;
	}
	return 0;
}

