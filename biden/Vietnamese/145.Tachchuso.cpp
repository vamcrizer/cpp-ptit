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
		int sum = 0;
		for(int i = 0; i < s.size(); i++){
			if(isdigit(s[i])) sum += s[i] - '0';
			else mp[s[i]]++;
		}
		for(auto x : mp){
			for(int i = 0; i < x.second; i++) cout << x.first;
		}
		cout << sum << endl;
	}
	// Biden
	return 0;
}

