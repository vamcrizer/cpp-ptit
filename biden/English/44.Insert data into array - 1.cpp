#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m, p;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	cin >> p;
	for(int i = 0; i < p; i++) cout << a[i] << " ";
	for(int i = 0; i < m; i++) cout << b[i] << " ";
	for(int i = p; i < n; i++) cout << a[i] << " ";
	// Biden
	return 0;
}
