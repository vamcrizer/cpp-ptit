#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		map<int, int> mp;
		int a, mini = 1e4, maxi = 0;
		for(int i = 0; i < n; i++){
			cin >> a;
			mini = min(mini, a);
			maxi = max(maxi, a);
			mp[a]++;
		}
		cout << maxi - mini + 1 - mp.size() << endl;
	}
	// Biden
	return 0;
}
