#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll a, x, y;
		cin >> a >> x >> y;
		for(int i = 0; i < __gcd(x, y); i++){
			cout << a;
		}
		cout << endl;
	}
	// Biden
	return 0;
}
