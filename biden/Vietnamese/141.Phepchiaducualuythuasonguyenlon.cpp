#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll binPow(ll a, ll b, ll m){
	if(b == 0) return 1;
	ll x = binPow(a, b / 2, m);
	if(b % 2) return (((x % m) * (x % m)) % m * (a % m)) % m;
	else return ((x % m) * (x % m)) % m;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string a;
		ll b, m;
		cin >> a >> b >> m;
		ll tmp = 0, res = 0;
		for(int i = 0; i < a.size(); i++){
			tmp = tmp * 10 + a[i] - '0';
			tmp %= m;
		}
		res = binPow(tmp, b, m);
		cout << res % m << endl;
	}
	// Biden
	return 0;
}
