#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}sort(a, a+n);
		int res = 1e7;
		for(int i=0; i<n-1; i++){
			res = min(res, a[i+1]-a[i]);
		}cout << res << endl;
	}
}