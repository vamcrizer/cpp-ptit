#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a;
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			cin >> a;
			mp[a]++;
		}
		int sum = 0;
		for(auto x : mp){
			if(x.second > 1) sum += x.second;
		}
		cout << sum << endl;
	}

	// Biden
	return 0;
}

