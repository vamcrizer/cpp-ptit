#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		int i = 0, j = n - 1;
		while(i < j){
			cout << a[j] << " ";
			j--;
			cout << a[i] << " ";
			i++;
		}
		if(n % 2) cout << a[n / 2];
		cout << endl;
	}
	// Biden
	return 0;
}
