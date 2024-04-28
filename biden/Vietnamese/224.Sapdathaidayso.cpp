#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a1[n], a2[m];
		map<int, int> mp;
		vector<int> v;
		for(int i = 0; i < n; i++) cin >> a1[i];
		for(int i = 0; i < m; i++){
			cin >> a2[i];
			mp[a2[i]] = 1;
		}
		for(int i = 0; i < n; i++){
			if(mp[a1[i]] >= 1) mp[a1[i]]++;
			else v.push_back(a1[i]);
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < m; i++){
			if(mp[a2[i]] > 0){
				for(int j = 1; j < mp[a2[i]]; j++) cout << a2[i] << " ";
				mp[a2[i]] = 0;
			}
		}
		for(auto x : v){
			cout << x << " ";
		}
		cout << endl;
	}
	// Biden
	return 0;
}

