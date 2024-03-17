#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int k, n;
		cin >> k >> n;
		int a[n * k];
		for(int i = 0; i < k; i++)
			for(int j = 0; j < n; j++)
				cin >> a[i * n + j];
		sort(a, a + n * k);
		for(int i = 0; i < n * k; i++) cout << a[i] << " ";
		cout << endl;
	}
	// Biden
	return 0;
}
