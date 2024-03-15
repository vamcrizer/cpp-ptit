#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int maxsum = 0;
		int n, m; cin >> n >> m;
		int a[n + 5] = {0}, b[m + 5] = {0};
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			a[i] += a[i - 1];
		}
		for(int i = 1; i <= m; i++){
			cin >> b[i];
			b[i] += b[i - 1];
		}
		for(int i = 1; i <= min(m, n); i++){
			maxsum = max(maxsum, max(a[i] + b[m] - b[i], b[i] + a[n] - a[i]));
		}
		cout << maxsum << endl;
	}
	// Biden
	return 0;
}

