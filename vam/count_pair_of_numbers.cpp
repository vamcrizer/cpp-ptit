#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MX = 1e5 + 5;
const int MOD = 1e9 + 7;

int n, k, a[MX];

int main() {
	int t; cin >> t; 
    while (t--) {
		cin >> n >> k;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
            se.insert(a[i]);
		}
		sort(a + 1, a + n + 1);
		int fn = 0;
		for (int i = 1; i <= n - 1; i++) {
			int id = lower_bound(a + i + 1, a + n + 1, k - a[i]) - a;
			fn += n - id + 1;
		}
		cout<< fn << endl;
	}	
	return 0;
}