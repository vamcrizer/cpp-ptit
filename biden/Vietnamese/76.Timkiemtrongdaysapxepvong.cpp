#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, x, a, pos = -1, f = 0;
		cin >> n >> x;
		for(int i = 1; i <= n; i++){
			cin >> a;
			if(a == x) pos = i;
		}
		cout << pos << endl;
	}
	// Biden
	return 0;
}
