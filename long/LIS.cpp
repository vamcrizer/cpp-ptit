// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int solve(int a[], int n){
	int r[n+5] = {0};
	for(int i=1; i<=n; i++){
		r[i] = 1;
		for(int j=1; j<i; j++){
			if(a[i] > a[j]){
				r[i] = max(r[i], r[j] + 1);
			}
		}//cout << r[i] << ' ';
	}int res = *max_element(r+1, r+n+1);
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}cout << solve(a, n) << endl;
	}
}