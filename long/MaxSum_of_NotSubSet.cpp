// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(ll a[], int n){
	ll r[n+5];
	memset(r, 0, sizeof(r));
	r[1] = a[1], r[2] = a[2];
	deque<ll> d;
	d.push_back(r[1]);
	for(int i=3; i<=n; i++){
		r[i] = d.front() + a[i];
		while(!d.empty() && r[i-1] > d.back()){
			d.pop_back();
		}d.push_back(r[i-1]);
	}
	int res = *max_element(r+1, r+n+1);
	cout << res << endl;
	// 	cout << r[i] << ' ';
	// }cout << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n+5];
		memset(a, 0, sizeof(a));
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}solve(a, n);
	}	
}