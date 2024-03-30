#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string n;
		ll m;
		cin >> n >> m;
		ll res = 0;
		for(int i = 0; i < n.size(); i++){
			res = res * 10 + n[i] - '0';
			res %= m;
		}
		cout << res % m << endl;
	}
	// Biden
	return 0;
}

