#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int maximum = 0;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) maximum = max(maximum, a[i]);
		cout << maximum << endl;
	}
	// Biden
	return 0;
}

