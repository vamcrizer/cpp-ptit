#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		map<char, int> mp;
		for(auto c : s){
			mp[c]++;
		}
		for(auto c : s){
			if(mp[c] == 1) cout << c;
		}
		cout << endl;
	}
	// Biden
	return 0;
}

