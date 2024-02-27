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
		int a[n+5], res = -1e7;
		for(int i=1; i<=n; i++){
			cin >> a[i];
			res = max(res, a[i]);
		}cout << res << endl;
	}
}