#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

ll C[1001][1001];
void nCk(){
	// Qui hoach dong basic
	for(int i = 0; i <= 1000; i++){
		for(int j = 0; j <= i; j++){
			if(i == j || j == 0) C[i][j] = 1;
			else {
				C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
				C[i][j] %= MOD;
			}
		}
	}
	// Chi tinh dc den 10^3, 10^4
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	nCk();
	while(t--){
		int n, r;
		cin >> n >> r;
		cout << C[n][r] << endl;
	}
	// Biden
	return 0;
}

