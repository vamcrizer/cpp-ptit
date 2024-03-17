// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(ll a[], int n){
	ll res = -1e7;
	for(int i=1; i<=n; i++){
		ll tmp = 1;
		for(int j=i; j<=n; j++){
			tmp *= a[j];
			res = max(res, tmp);
		}
	}cout << max(res, (ll)0) << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}solve(a, n);
	}	
}