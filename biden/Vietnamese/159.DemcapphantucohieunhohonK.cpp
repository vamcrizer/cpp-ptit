#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		ll cnt = 0;
		for(int i = 0; i < n; i++){
			auto x = lower_bound(a + i + 1, a + n, k + a[i]);
			cnt += (ll) (x - (a + i) - 1); 
		}
		cout << cnt << endl;
	}
	// Biden
	return 0;
}

