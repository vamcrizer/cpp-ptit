#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll n){
	ll digit = n % 10;
	n /= 10;
	while(n > 0){
		if(abs(n % 10 - digit) != 1) return 0;
		digit = n % 10;
		n /= 10;
	}
	return 1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(check(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	// Biden
	return 0;
}

