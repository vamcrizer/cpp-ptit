// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;



int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		ll a[n+5], b[n+5], x = -1e15, y = 1e15;
		for(int i=1; i<=n; i++){
			cin >> a[i];
			if(a[i] > x) x = a[i];
		}
		for(int i=1; i<=m; i++){
			cin >> b[i];
			if(b[i] < y) y = b[i];
		}cout << x*y << endl;
	}
}