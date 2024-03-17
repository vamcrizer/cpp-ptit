// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(int a[], int n){
	int l = 1, r = n, res = 0;
	while(l <= r){
		if(a[l] == a[r]){
			++l; --r;
		}else if(a[l] > a[r]){
			a[r-1] += a[r];
			++res; --r;
		}else{
			a[l+1] += a[l];
			++res; ++l;
		}
	}cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}solve(a, n);
	}
}