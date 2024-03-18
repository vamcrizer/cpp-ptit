#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;
//(a + b) % c = ((a % c) + (b % c)) % c
//(a * b) % c = ((a % c) * (b % c)) % c
//(a ^ b) % c = (a % c) ^ b % c
//(a / b) % c = (a % c * b ^ -1) % c
ll powMod(ll a, ll b, ll c){
	ll res = 1;
	a %= c;
	for(int i = 1; i <= b; i++){
		res *= a;
		res %= c;
	}
	return res %= c;
}

ll p(int n, int x, int a[]){
	ll res = 0;
	for(int i = 0; i < n; i++){
		res += ((a[i] % MOD) * powMod(x, n - i - 1, MOD)) % MOD;
	}
	return res % MOD;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << p(n, x, a) << endl;
	}
	// Biden
	return 0;
}
