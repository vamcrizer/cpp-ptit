#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

ll f[1005];
void fibosieve(){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i < 1001; i++){
		f[i] = ((f[i - 1] % MOD) + (f[i - 2]) % MOD) % MOD;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	fibosieve();
	while(t--){
		int n;
		cin >> n;
		cout << f[n] << endl;
	}
	// Biden
	return 0;
}
