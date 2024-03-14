#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

ll gcdSum(ll n){
	ll res = n;
	ll sum = 0;
	while(res > 0){
		sum += res % 10;
		res /= 10;
	}
	return gcd(n, sum);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		while(gcdSum(n) == 1) n++;
		cout << n << endl;
	}
	// Biden
	return 0;
}
