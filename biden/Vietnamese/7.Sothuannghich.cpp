#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int thuannghich(ll n){
	ll res = 0;
	ll tmp = n;
	while(n > 0){
		res = res * 10 + n % 10;
		n /= 10;
	}
	return res == tmp;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(thuannghich(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	// Biden
	return 0;
}

