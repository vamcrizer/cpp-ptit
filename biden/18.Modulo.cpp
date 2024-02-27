#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	ll x = abs(a - b);
	ll y = abs(b - c);
	ll z = abs(c - d);
	cout << __gcd(__gcd(x, y), z);
	// Biden
	return 0;
}
