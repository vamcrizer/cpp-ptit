// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void in(ld a[], int n){
	for(int i=1; i<=n; i++){
		cout << a[i] << ' ';
	}cout << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		ld a[n+5], b[m+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
			a[i] = log(a[i])/a[i];
		}sort(a+1,a+n+1);
		for(int i=1; i<=m; i++){
			cin >> b[i];
			b[i] = log(b[i])/b[i];
		}sort(b+1, b+m+1, greater<int>());
		//in(a, n); in(b, m);
		ll res = 0;
		for(int i=1; i<=m; i++){
			//int pos = find(b, m, a[i]);
			int pos = upper_bound(a+1, a+n+1, b[i]) - a;
			//cout << "Vi tri dau tien lon hon " << b[i] << " la: " << pos << endl;
			res += n - pos + 1;
		}cout << res << endl;
	}
}