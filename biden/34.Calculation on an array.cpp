#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;
//(a + b) % c = ((a % c) + (b % c)) % c
//(a * b) % c = ((a % c) * (b % c)) % c
//(a ^ b) % c = (a % c) ^ b % c
//(a / b) % c = (a % c * b ^ -1) % c
ll h(int a[], int n){
	ll res = 1;
	for(int i = 0; i < n; i++){
		res = (res * a[i]) % MOD;
	}
	return res % MOD;
}

ll g(int a[], int n){
	int res = a[0];
	for(int i = 1; i < n; i++){
		res = __gcd(res, a[i]);
	}
	return res % MOD;
}

ll calc(int a[], int n){
	ll res = 1;
	ll hx = h(a, n);
	ll gx = g(a, n);
	for(int i = 1; i <= gx; i++){
		res *= hx;
		res %= MOD;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << calc(a, n) << endl;
	}
	// Biden
	return 0;
}

