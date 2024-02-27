#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int maxdist = -1;
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 1; i < n; i++){
			for(int j = 0; j < i; j++){
				maxdist = max(maxdist, a[i] - a[j]);
			}
		}
		cout << maxdist << endl;
	}
	// Biden
	return 0;
}

