// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int mark[1000005];
void solve(ll a[], int n){
	for(int i=0; i<n; i++){
		if(mark[i]==1){
			cout << i << ' ';
			mark[i] = 0;
		}else cout << "-1 ";
	}cout << endl;
}

int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n+5];
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(a[i] >= 0 && a[i] < n) mark[a[i]] = 1;
		}solve(a, n);
	}
}