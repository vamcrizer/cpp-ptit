#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll max = -1e9, temp_max = 0;
		ll a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		// Kadane's Algorithm
		for(int i = 0; i < n; i++){
			temp_max += a[i];
			if(max < temp_max){
				max = temp_max;
			}
			if(temp_max < 0){
				temp_max = 0;
			}
		}
		cout << max << endl;
	}
	// Biden
	return 0;
}

