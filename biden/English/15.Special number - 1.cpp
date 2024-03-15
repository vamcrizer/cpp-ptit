#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int sum(ll n){
	if(n == 0) return 0;
	return n % 10 + sum(n / 10);
}

bool nt(int n){
	if(n == 2 || n == 3) return 1;
	if(n % 2 == 0 || n % 3 == 0 || n < 2) return 0;
	for(int i = 5; i * i <= n; i++){
		if(n % i == 0 || n % (i + 2) == 0) return 0;
	}
	return 1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		int ans = sum(n);
		if(nt(ans)) cout << n << endl;
		else cout << -1 << endl;
	}
	// Biden
	return 0;
}
