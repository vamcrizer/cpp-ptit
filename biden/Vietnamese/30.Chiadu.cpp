#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int x, y, g;
void extended_gcd(int a, int b){
	if(b == 0){
		x = 1;
		y = 0;
		g = a;
	} else {
		extended_gcd(b, a % b);
		int tmp = x;
		x = y;
		y = tmp - a / b * y;		
	}
}

int modular_inverse(int a, int m){
	extended_gcd(a, m);
	return (x % m + m) % m;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int a, m;
		cin >> a >> m;
		if(__gcd(a, m) != 1){
			cout << -1 << endl;
			continue;
		}
		int ans = modular_inverse(a, m);
		if(ans < m && ans > 0) cout << ans << endl;
		else cout << -1 << endl;	
	}
	// Biden
	return 0;
}
