#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b, a%b);
}
int cnt(ll n){
	int res = 0;
	while(n){
		++res;
		n /= 10;
	}return res;
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		ll x, y, z, n;
		cin >> x >> y >> z >> n;
		ll tmp = x*y/gcd(x, y);
		ll tam = tmp*z/gcd(tmp, z);
		ll num = (ll)pow(10, n-1);
		ll res = num/tam;
		if(res*tam != num) ++res;
		res *= tam;
		if(cnt(res)==n) cout << res << endl;
		else cout << -1 << endl;
	}
}