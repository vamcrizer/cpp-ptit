#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int mini = 1e7;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				mini = (abs(mini) > abs(a[i] + a[j])) ? a[i] + a[j] : mini;
			}
		}
		cout << mini << endl;
	}
	// Biden
	return 0;
}

