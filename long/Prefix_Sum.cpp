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
		int a[n+5], r[n+5];
		r[0] = 0;
		for(int i=1; i<=n; i++){
			cin >> a[i];
			r[i] = r[i-1] + a[i];
		}
		while(q--){
			int x, y; cin >> x >> y;
			cout << r[y] - r[x-1] << endl;
		}
	}
}