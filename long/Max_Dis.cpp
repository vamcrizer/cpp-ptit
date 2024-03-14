// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(int a[], int n){
	int res = 0;
	for(int i=1; i<=n; i++){
		for(int j=n; j>=i+res; j--){
			if(a[i] <= a[j]){
				res = j - i;
				break;
			}
		}
	}cout << res << endl;
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