// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int dem[1000005];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		memset(dem, 0, sizeof(dem));
		int n; cin >> n;
		int a[n+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
			++dem[a[i]];
		}int res = 0;
		for(int i=1; i<=n; i++){
			if(dem[a[i]] > 1){
				res += dem[a[i]];
				dem[a[i]] = 0;
			}
		}cout << res << endl;
	}
}