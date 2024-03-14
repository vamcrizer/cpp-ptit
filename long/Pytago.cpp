// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int check(ll a[], int n){
	for(int i=1; i<=n; i++){
		int l = 1, r = n;
		while(l < r){
			ll sum = a[l] + a[r];
			if(sum == a[i]) return 1;
			else if(sum > a[i]) --r;
			else ++l;
		}
	}return 0;
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
			a[i] = a[i] * a[i];
		}sort(a+1, a+n+1);
		if(check(a, n)==1) cout << "YES\n";
		else cout << "NO\n";
	}	
}