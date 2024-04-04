#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		ll sum = n * (n + 1) / 2;
		if((sum + m) % 2 != 0){
			cout << "No" << endl;
		} else {
			ll tmp = (sum + m) / 2;
			if(__gcd(tmp, sum - tmp) == 1) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}
	// Biden
	return 0;
}

