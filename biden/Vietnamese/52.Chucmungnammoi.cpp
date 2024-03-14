#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	map<string, int> mp;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		mp[s]++;
	}
	cout << mp.size();
	// Biden
	return 0;
}

