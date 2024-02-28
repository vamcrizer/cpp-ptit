#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int gcd = __gcd(a, b);
		cout << 1ll * a / gcd * b << " " << gcd << endl;
	}
	// Biden
	return 0;
}

