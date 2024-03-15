#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(string s){
	map<char, int> mp;
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
		mp[s[i]]++;
	}
	return mp.size();
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		int k;
		cin >> s >> k;
		if(check(s) + k >= 26) cout << 1 << endl;
		else cout << 0 << endl;
	}
	// Biden
	return 0;
}

