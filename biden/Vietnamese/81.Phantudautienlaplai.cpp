#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a, res = -1;
		bool f = false;
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			cin >> a;
			mp[a]++;
			if(mp[a] == 2 && !f){
				f = true;
				res = a;
			}
		}
		cout << res << endl;
	}
	// Biden
	return 0;
}
