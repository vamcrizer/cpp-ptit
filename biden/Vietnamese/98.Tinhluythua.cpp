#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll powMod(ll a, ll b, ll c){
	ll res = 1;
	for(int i = 0; i < b; i++){
		res *= a;
		res %= c;
	}
	return res % c;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int x, y, p;
		cin >> x >> y >> p;
		cout << powMod(x, y, p) << endl;
	}
	// Biden
	return 0;
}

