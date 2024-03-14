// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void nhap(ll a[], int n){
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
}

void solve(ll a[], int n, ll b[], int m, ll c[], int p){
	int x = 1, y = 1, z = 1, dk = 0;
	while(x <= n && y <= m && z <= p){
		if(a[x] == b[y] && b[y] == c[z]){
			dk = 1;
			cout << a[x] << ' ';
			++x; ++y; ++z;
		}else{
			ll tmp = min({a[x], b[y], c[z]});
			if(tmp == a[x]) ++x;
			if(tmp == b[y]) ++y;
			if(tmp == c[z]) ++z;
		}
	}if(!dk) cout << -1;
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		int n, m, p; cin >> n >> m >> p;
		ll a[n+5], b[m+5], c[p+5];
		nhap(a, n); nhap(b, m); nhap(c, p);
		solve(a, n, b, m, c, p);
	}
}