#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n * n];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> a[i * n + j];
		sort(a, a + n * n);
		cout << a[k - 1] << endl;
	}
	// Biden
	return 0;
}

