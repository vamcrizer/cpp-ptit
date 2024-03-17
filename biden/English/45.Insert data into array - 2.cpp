#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t, d = 0; cin >> t;
	while(t--){
		int n, m, p;
		cin >> n >> m >> p;
		int a[n], b[m];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];
		d++;
		cout << "Test " << d << ":" << endl;
		for(int i = 0; i < p; i++) cout << a[i] << " ";
		for(int i = 0; i < m; i++) cout << b[i] << " ";
		for(int i = p; i < n; i++) cout << a[i] << " ";
		cout << endl;
	}
	// Biden
	return 0;
}
