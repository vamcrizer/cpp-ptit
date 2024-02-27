#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll n){
	if(n % 2 != 0) return false;
	while(n > 0){
		ll digit = n % 10;
		if(digit % 2 != 0) return false;
		n /= 10;
	}
	return true;
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
