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
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}int dk=0, res = -1e7;
		for(int i=1; i<=n; i++){
			for(int j=i+1; j<=n; j++){
				if(a[j] > a[i]){
					dk = 1;
					res = max(res, a[j]-a[i]);
				}
			}
		}if(dk) cout << res << endl;
		else cout << -1 << endl;
	}
}