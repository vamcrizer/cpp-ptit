#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a;
		map<ll, int> mp;
		for(int i = 0; i < n; i++){
			cin >> a;
			mp[a]++;
		}
		for(int i = 0; i < n; i++){
			if(mp[i]) cout << i << " ";
			else cout << -1 << " ";
		}
		cout << endl;
	}
	// Biden
	return 0;
}
