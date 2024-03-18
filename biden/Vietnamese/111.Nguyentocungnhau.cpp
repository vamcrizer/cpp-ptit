#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool nt(int n){
	if(n == 2 || n == 3) return true;
	if(n % 2 == 0 || n % 3 == 0 || n < 2) return false;
	for(int i = 5; i * i <= n; i += 6){
		if(n % i == 0 || n % (i + 2) == 0){
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		int cnt = 1;
		if(nt(x)) cnt = x - 1;
		else {
			for(int i = 2; i < x; i++){
				if(__gcd(i, x) == 1) cnt++;
			}
		}
		if(nt(cnt)) cnt = 1;
		else cnt = 0;
		cout << cnt << endl;
	}
	// Biden
	return 0;
}

