#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2, word;
		map<string, int> mp;
		getline(cin, s1);
		getline(cin, s2);
		stringstream ss1(s1), ss2(s2);
		while(ss1 >> word){
			mp[word]++;
		}
		while(ss2 >> word){
			mp.erase(word);
		}
		for(auto x : mp){
			cout << x.first << " ";
		}
		cout << endl;
	}
	// Biden
	return 0;
}

