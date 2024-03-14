// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(int a[], int n, int k, int x){
	int dem = 0;
	for(int i=1; i<=x; i++){
		if(a[i] <= k) ++dem;
	}int res = dem;
	for(int i=x+1; i<=n; i++){
		if(a[i-x] <= k) --dem;
		if(a[i] <= k) ++dem;
		res = max(res, dem);
	}cout << x - res << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n+5], x = 0;
		for(int i=1; i<=n; i++){
			cin >> a[i];
			if(a[i] <= k) ++x;
		}solve(a, n, k, x);
	}
}