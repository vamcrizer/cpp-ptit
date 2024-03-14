// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int dem[12];

void xuli(int n){
	while(n){
		dem[n%10] = 1;
		n /= 10;
	}
}

void solve(ll a[], int n){
	for(int i=1; i<=n; i++){
		xuli(a[i]);
	}
	for(int i=0; i<=9; i++){
		if(dem[i]) cout << i << ' ';
	}cout << endl;
}

int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		memset(dem, 0, sizeof(dem));
		int n; cin >> n;
		ll a[n+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}solve(a, n);
	}
}