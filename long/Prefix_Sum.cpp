// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n, q; cin >> n >> q;
		int a[n+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		while(q--){
			int l, r; cin >> l >> r;
			int res = 0;
			for(int i=l; i<=r; i++){
				res += a[i];
			}cout << res << endl;
		}
	}
}