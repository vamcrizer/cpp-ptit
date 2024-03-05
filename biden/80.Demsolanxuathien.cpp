#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a, cnt = 0;
		for(int i = 0; i < n; i++){
			cin >> a;
			if(a == x) cnt++;
		}
		if(cnt) cout << cnt << endl;
		else cout << -1 << endl;
	}
	// Biden
	return 0;
}

