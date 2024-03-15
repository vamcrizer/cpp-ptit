#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[1005];
		// ktao
		for(int i = 1; i <= n; i++) cin >> a[i];
		// sinh
		int i = n - 1;
		while(i >= 1 && a[i] < a[i + 1]){
			--i;
		}
		if(i == 0) reverse(a + 1, a + n + 1);
		else {
			swap(a[i], a[n]);
			if(i != n - 1) reverse(a + i + 1, a + n + 1);
		}
		for(int i = 1; i <= n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	// Biden
	return 0;
}
