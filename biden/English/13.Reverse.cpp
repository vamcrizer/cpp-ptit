#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll reverse(ll n){
	ll res = n;
	ll rev = 0;
	ll digit = 0;
	while(n > 0){
		digit++;
		n /= 10;
	}
	while(digit > 0){
		rev = rev * 10 + res % 10;
		res /= 10;
		digit--;
	}
	return rev;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n; cin >> n;
	cout << reverse(n);
	// Biden
	return 0;
}
