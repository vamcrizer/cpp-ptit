// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

ll powMod(ll x, ll y, ll p){
	ll res = 1;
	while(y){
		if(y%2==1){
			res *= x;
			res %= p;
		}
		y /= 2;
		x *= x;
		x %= p;
	}return res%p;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		ll x, y, p; cin >> x >> y >> p;
		cout << powMod(x, y, p) << endl;
	}
}