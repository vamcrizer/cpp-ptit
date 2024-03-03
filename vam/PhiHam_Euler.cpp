// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int nt(ll n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}return n>1;
}

int euler(int n){
	ll res = n;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			while(n%i==0) n /= i;
			res -= res/i;
		}
	}if(n != 1) res -= res/n;
	return nt(res);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << euler(n) << endl;
	}
}