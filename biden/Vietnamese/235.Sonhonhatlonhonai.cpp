#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set<int> se;
		vector<int> v;
		int a[n], m = -1e9;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			m = max(m, a[i]);
			se.insert(a[i]);
		}
		for(auto x : se) v.push_back(x);
		for(int i = 0; i < n; i++){
			if(a[i] == m) cout << "_ ";
			else {
				int pos = upper_bound(v.begin(), v.end(), a[i]) - v.begin();
				cout << v[pos] << " ";				
			}
		}
		cout << endl;
	}
	// Biden
	return 0;
}

