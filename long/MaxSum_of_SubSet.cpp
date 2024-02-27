// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(ll a[], int n, ll res){
	ll sum = 0, tmp = res;
	for(int i=1; i<=n; i++){
		sum += a[i];
		if(sum < tmp) sum = tmp;
		res = max(res, sum);
	}cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n+5], m = 1e15, dk = 0;
		for(int i=1; i<=n; i++){
			cin >> a[i];
			if(a[i] >= 0) dk = 1;
			if(dk==0 && a[i] < m) m = a[i];
		}if(dk==1) solve(a, n, 0);
		else solve(a, n, m);
	}
}