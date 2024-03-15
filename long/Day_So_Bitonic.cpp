// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(int a[], int n){
	int td[105], gd[105];
	for(int i=1; i<=n; i++){
		td[i] = 1;
		for(int j=1; j<i; j++){
			if(a[i] > a[j]){
				td[i] = max(td[i], td[j] + 1);
			}
		}
	}
	for(int i=n; i>=1; i--){
		gd[i] = 1;
		for(int j=n; j>i; j--){
			if(a[i] > a[j]){
				gd[i] = max(gd[i], gd[j] + 1);
			}
		}
	}int res = 0;
	for(int i=1; i<=n; i++){
		//cout << td[i] << ' ' << gd[i] << endl;
		res = max(res, td[i] + gd[i] - 1);
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