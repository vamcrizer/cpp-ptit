#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b, a%b);
}
void solve(ll a, ll res){
	for(int i=1; i<=res; i++){
		cout << a;
	}cout << endl;
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		ll a, x, y;
		cin >> a >> x >> y;
		ll res = gcd(x, y);
		solve(a, res);
	}
}