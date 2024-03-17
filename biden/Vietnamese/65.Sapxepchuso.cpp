#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		map<int, int> mp;
		string s;
		for(int i = 0; i < n; i++){
			cin >> s;
			for(int i = 0; i < s.size(); i++){
				mp[s[i] - '0']++;
			}
		}
		for(auto x : mp){
			cout << x.first << " ";
		}
		cout << endl;
	}
	// Biden
	return 0;
}
