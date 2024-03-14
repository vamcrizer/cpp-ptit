#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		ll ans = 0, temp = 1;
		while(k > 0){
			if(k % 2 == 1) ans = (ans % MOD + temp % MOD) % MOD;
			k /= 2;
			temp *= n;
			temp %= MOD;
		}
		cout << ans % MOD << endl;
	}
	// Biden
	return 0;
}

