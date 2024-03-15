#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		while(a % 2 == 0) a /= 2;
		while(a % 3 == 0) a /= 3;
		while(b % 2 == 0) b /= 2;
		while(b % 3 == 0) b /= 3;
		if(a == b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	// Biden
	return 0;
}
