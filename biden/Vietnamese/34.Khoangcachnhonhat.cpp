#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int minimum = 1e9;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				minimum = min(minimum, abs(a[i] - a[j]));
			}
		}
		cout << minimum << endl;
	}
	// Biden
	return 0;
}
