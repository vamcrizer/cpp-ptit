#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b, a%b);
}
int check(ll n){
	ll x = 0, so = n;
	while(so){
		x += so%10;
		so /= 10;
	}return gcd(n, x) > 1;
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		for(ll i=n; ;i++){
			if(check(i)){
				cout << i << endl;
				break;
			}
		}
	}
}