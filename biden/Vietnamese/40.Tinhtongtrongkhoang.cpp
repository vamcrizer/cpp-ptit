#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, k, l, r;
		cin >> n >> k;
		int a[n + 1], ps[n + 1];
		ps[0] = 0;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			ps[i] = ps[i - 1] + a[i];
		}
		for(int i = 0; i < k; i++){
			cin >> l >> r;
			cout << ps[r] - ps[l - 1] << endl;
		}
	}
	// Biden
	return 0;
}
