#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int locphat(int n){
	while(n > 0){
		if(n % 10 != 0 && n % 10 != 6 && n % 10 != 8) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(locphat(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	// Biden
	return 0;
}

