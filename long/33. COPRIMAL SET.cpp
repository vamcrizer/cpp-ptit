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
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		ll n, m; cin >> n >> m;
		ll sum = (n+1)*n/2;
		ll x = (sum+m)/2;
		if(x*2 != sum+m){
			cout << "No\n";
			continue;
		}ll y = sum - x;
		if(gcd(x, y)==1) cout << "Yes\n";
		else cout << "No\n";
	}
}