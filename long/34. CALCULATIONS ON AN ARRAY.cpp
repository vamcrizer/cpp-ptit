#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;
ll m = 1000000007;
ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b, a%b);
}
ll powM(ll a, ll b){
	ll res = 1;
	while(b){
		if(b%2==1){
			res *= a;
			res %= m;
		}
		b /= 2;
		a *= a;
		a %= m;
	}return res%m;
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n+5], pro = 1;
		for(int i=1; i<=n; i++){
			cin >> a[i];
			pro *= a[i];
			pro %= m;
		}ll u = a[1];
		for(int i=2; i<=n; i++){
			u = gcd(u, a[i]);
		}ll res = powM(pro, u);
		cout << res << endl;
	}
}