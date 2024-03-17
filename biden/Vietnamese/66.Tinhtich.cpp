#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, m, maximum = -1e9, minimum = 1e9;
		cin >> n >> m;
		int a;
		for(int i = 0; i < n; i++){
			cin >> a;
			maximum = max(maximum, a);
		}
		for(int i = 0; i < m; i++){
			cin >> a;
			minimum = min(minimum, a);
		}
		cout << 1ll * minimum * maximum << endl;
	}
	// Biden
	return 0;
}
