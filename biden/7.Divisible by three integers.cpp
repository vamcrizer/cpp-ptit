#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// B1: Tim BCNN
// B2: Tim so nho nhat co x chu so bang ct sau:
// floor((10 ^ (x - 1) + bcnn - 1) / bcnn) * bcnn

ll lcm(ll a, ll b){
	return a / __gcd(a, b) * b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int x, y, z, n;
		cin >> x >> y >> z >> n;
		ll bcnn = lcm(x, lcm(y, z));
		ll res = ((ll) pow(10, n - 1) + bcnn - 1) /bcnn * bcnn;
		if(res < pow(10, n)) cout << res << endl;
		else cout << "-1" << endl;		
	}
	// Biden
	return 0;
}

// TQ: Tim so nn chia het cho a ma k vuot qua b
// floor(b + a - 1) / a * a
