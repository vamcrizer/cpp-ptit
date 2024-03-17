// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(int a[], int n){
	int td[n], gd[n], x = 0, y = 0;
	int m = n/2;
	for(int i=1; i<=n - m; i++){
		td[x++] = a[i];
	}x = 0;
	for(int i=n-m+1; i<=n; i++){
		gd[y++] = a[i];
	}y = 0;
	for(int i=1; i<=n; i++){
		if(i%2==1){
			cout << td[x++] << ' ';
		}else cout << gd[y++] << ' ';
	}cout << endl;
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
		}sort(a+1, a+n+1);
		solve(a, n);
	}
}