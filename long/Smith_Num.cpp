// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int nt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}return n>1;
}

int tcs(int n){
	int res = 0;
	while(n){
		res += n%10;
		n /= 10;
	}return res;
}

int check(int n){
	if(nt(n)) return 0;
	int sum = 0, tmp = tcs(n);
	for(int i=2; i<=sqrt(n); i++){
		while(n%i==0){
			sum += tcs(i);
			n /= i;
		}
	}if(n != 1) sum += tcs(n);
	return sum==tmp;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(check(n)) cout << "YES\n";
		else cout << "NO\n";
	}
}