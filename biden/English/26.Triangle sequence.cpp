#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a;
		cin >> a;
		int maximum = a;
		for(int i = 1; i < n; i++){
			cin >> a;
			maximum = max(maximum, a);
		}
		cout << maximum << endl;
	}
	// Biden
	return 0;
}

