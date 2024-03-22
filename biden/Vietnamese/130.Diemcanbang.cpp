#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		bool ok = false;
		int res = -1, a[n + 1], ps[n + 1];
		ps[0] = 0;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			ps[i] = a[i] + ps[i - 1];
		}
		int sum = ps[n];
		for(int i = 1; i <= n; i++){
			if((sum - a[i]) % 2 == 1) continue;
			if(ps[i] == sum + a[i] - ps[i] && !ok){
				ok = true;
				res = i;
			}
		}
		cout << res << endl;
	}
	// Biden
	return 0;
}
