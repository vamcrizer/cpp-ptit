// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}int dk = 0;
		for(int i=1; i<=n; i++){
			if(a[i]==x){
				cout << i << endl;
				dk = 1; break;
			}
		}if(dk==0) cout << -1 << endl;
	}
}