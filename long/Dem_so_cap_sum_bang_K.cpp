// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(int a[], int n, int k){
	ll res = 0;
	for(int i=1; i<=n; i++){
		int x = a[i] + k;
		int pos = lower_bound(a+i, a+n+1, x) - a;
		res += pos - 1 - i;
	}cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}sort(a+1, a+n+1);
		solve(a, n, k);
	}
}