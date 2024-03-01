// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(int a[], int n, int k){
	for(int i=k+1; i<=n; i++){
		cout << a[i] << ' ';
	}
	for(int i=1; i<=k; i++){
		cout << a[i] << ' ';
	}cout << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}solve(a, n, k);
	}
}