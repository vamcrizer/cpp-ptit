#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

ll m = 1000000007;
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
		ll n, x; cin >> n >> x;
		ll a[n+5], res = 0;
		for(int i=n-1; i>=0; i--){
			cin >> a[i];
			res += a[i] * powM(x, i);
			res %= m;
		}cout << res%m << endl;
	}
}