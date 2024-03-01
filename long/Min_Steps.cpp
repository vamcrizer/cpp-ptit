// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(int a[], int n){
	int r[n+5];
	r[1] = 0;
	for(int i=2; i<=n; i++){
		r[i] = r[i-1] + 1;
		for(int j=1; j<i; j++){
			if(a[j] + j >= i){
				r[i] = min(r[i], r[j] + 1);
			}
		}
	}cout << r[n] << endl;
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
		}solve(a, n);
	}
}