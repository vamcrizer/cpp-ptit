#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll shutup(ll a, ll b, ll c){
	if(b == 0) return 0;
	ll tmp = shutup(a, b / 2, c);
	if(b % 2 == 0) return ((tmp % c) * 2) % c;
	return (a % c + (tmp % c) * 2) % c;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		long long a, b, c;
		cin >> a >> b >> c;
		cout << shutup(a, b, c) << endl;
	}
	// Biden
	return 0;
}

