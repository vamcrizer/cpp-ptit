#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int check(ll n){
	while(n){
		int chuso = n%10;
		if(chuso%2==1) return 0;
		n /= 10;
	}return 1;
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(check(n)) cout << "YES\n";
		else cout << "NO\n";
	}
}