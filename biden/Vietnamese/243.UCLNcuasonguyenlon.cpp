#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll a;
		string b;
		cin >> a >> b;
		ll res = 0;
		for(int i = 0; i < b.size(); i++){
			res = res * 10 + b[i] - '0';
			res %= a;
		}
		cout << __gcd(a, res) << endl;
	}
	// Biden
	return 0;
}
