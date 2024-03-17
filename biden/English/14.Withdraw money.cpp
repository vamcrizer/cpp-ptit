#include <bits/stdc++.h>
using namespace std;

int exchange(int n){
	switch(n){
		case 0:
			return 0;
		case 1:
		case 2:
		case 5:
			return 1;
		case 8:
		case 9:
			return 3;
		default:
			return 2;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ans = 0;
		int thousand = n / 1000;
		ans += thousand;
		n -= thousand * 1000;
		while(n > 0){
			int digit = n % 10;
			ans += exchange(digit);
			n /= 10;
		}
		cout << ans << endl;
	}
	// Biden
	return 0;
}
