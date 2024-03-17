#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int chiahet(int a, int n){
	if(a < 0) a = 0;
	return a / n;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int m, n, a, b;
		int ca, cb, cab;
		cin >> m >> n >> a >> b;
		ll bcnn = a / __gcd(a, b) * b;
		ca = chiahet(n, a) - chiahet(m - 1, a);
		cb = chiahet(n, b) - chiahet(m - 1, b);
		cab = chiahet(n, bcnn) - chiahet(m - 1, bcnn);
		cout << ca + cb - cab << endl;
	}
	// Biden
	return 0;
}

