#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char, int> mp;
		for(int i = 0; i < s.size(); i++){
			mp[s[i]]++;
		}
		for(int i = 0; i < s.size(); i++){
			if(mp[s[i]]){
				cout << s[i] << mp[s[i]];
				mp[s[i]] = 0;
			}
		}
		cout << endl;
	}
	// Biden
	return 0;
}
