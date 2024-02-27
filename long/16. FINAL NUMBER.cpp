#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
ll change(ll n){
	ll res = 0;
	while(n){
		res += n%10;
		n /= 10;
	}return res;
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		while(n>=10){
			n = change(n);
		}cout << n << endl;
	}
}