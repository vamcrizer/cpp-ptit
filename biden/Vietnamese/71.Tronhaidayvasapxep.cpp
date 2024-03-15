#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		map<int, int> mp;
		int a;
		for(int i = 0; i < n; i++){
			cin >> a;
			mp[a]++;
		}
		for(int i = 0; i < m; i++){
			cin >> a;
			mp[a]++;
		}
		for(auto x : mp){
			for(int i = 0; i < x.second; i++) cout << x.first << " ";
		}
		cout << endl;
	}
	// Biden
	return 0;
}
