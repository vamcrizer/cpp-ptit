#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n + 5];
		for(int i = 1; i <= n; i++) cin >> a[i];
		a[0] = a[1];
		a[n + 1] = a[n];
		for(int i = 1; i <= n; i++) cout << 1ll * a[i - 1] * a[i + 1] << " ";
		cout << endl;
	}
	// Biden
	return 0;
}

