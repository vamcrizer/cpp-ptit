#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
int nt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}return n>1;
}
int check(ll n){
	int res = 0;
	while(n){
		res += n%10;
		n /= 10;
	}return nt(res);
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(check(n)) cout << n << endl;
		else cout << -1 << endl;
	}
}