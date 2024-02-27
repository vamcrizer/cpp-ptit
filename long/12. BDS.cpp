#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b, a%b);
}
void solve(ll a, ll b){
	ll u = gcd(a, b);
	a /= u; b /= u;
	for(int i=2; i<=3; i++){
		while(a%i==0){
			a /= i;
		}while(b%i==0){
			b /= i;
		}
	}if(a==1 && b==1) cout << "YES\n";
	else cout << "NO\n";
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		ll a, b; cin >> a >> b;
		solve(a, b);
	}
}