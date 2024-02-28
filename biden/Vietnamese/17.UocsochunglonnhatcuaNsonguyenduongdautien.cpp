#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll g = 1;
		for(ll i = 2; i <= n; i++){
			g = g / __gcd(g, i) * i;
		}
		cout << g << endl;
	}
	// Biden
	return 0;
}

