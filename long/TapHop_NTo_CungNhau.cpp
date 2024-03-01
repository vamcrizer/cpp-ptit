// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b, a%b);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		ll n, m; cin >> n >> m;
		ll tong = n*(n+1)/2;
		ll x = (tong + m) / 2;
		if(x*2 != tong + m){
			cout << "No\n";
			continue;
		}
		ll y = tong - x;
		if(gcd(x, y)==1) cout << "Yes\n";
		else cout << "No\n";
	}
}