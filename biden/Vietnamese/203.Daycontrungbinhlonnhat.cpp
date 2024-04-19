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
		int n, k;
		cin >> n >> k;
		double res = -1e9;
		int l, r;
		int a[n + 1], dp[n + 1];
		dp[0] = 0;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			dp[i] = dp[i - 1] + a[i];
		}
		for(int i = 1; i <= n - k; i++){
			if(res < dp[i + k] - dp[i]){
				res = dp[i + k] - dp[i];
				l = i + 1;
				r = i + k;
			}
		}
		for(int i = l; i <= r; i++) cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}

