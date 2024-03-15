#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll final(ll n){
	if(n < 10) return n;
	ll ans = 0;
	while(n > 0){
		ans += n % 10;
		n /= 10;
	}
	return final(ans);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		cout << final(n) << endl;
	}
	// Biden
	return 0;
}
