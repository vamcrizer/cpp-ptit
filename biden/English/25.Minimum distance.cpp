#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int mindist = 1e8;
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				mindist = min(mindist, abs(a[i] - a[j]));
			}
		}
		cout << mindist << endl;
	}
	// Biden
	return 0;
}

