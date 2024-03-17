#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int count = 0;
		int a[100005] = {};
		int n; cin >> n;
		for(int i = 2; i <= sqrt(n); i++){
			while(n % i == 0){
				n /= i;
				a[count++] = i;
			}
		}
		if(n > 1) a[count++] = n;
		if(count == 3 && a[0] != a[1] && a[1] != a[2])
			cout << 1 << endl;
		else cout << 0 << endl;
	}
	// Biden
	return 0;
}
