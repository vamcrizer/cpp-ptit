#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a;
		int cnt = 0;
		for(int i = 0; i < n; i++){
			cin >> a;
			if(a == 0) cnt++;
			else cout << a << " ";
		}
		for(int i = 0; i < cnt; i++) cout << "0 ";
		cout << endl;
	}
	// Biden
	return 0;
}
