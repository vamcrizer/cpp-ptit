#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	cin.ignore();
	map<string, int> mp;
	while(t--){
		string s, word;
		vector<string> v;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> word){
			for(int i = 0; i < word.size(); i++){
				word[i] = tolower(word[i]);
			}
			v.push_back(word);
		}
		word = v.back();
		for(int i = 0; i < v.size() - 1; i++){
			word += v[i][0];
		}
		mp[word]++;
		cout << word;
		if(mp[word] > 1) cout << mp[word];
		cout << "@ptit.edu.vn" << endl;
	}
	// Biden
	return 0;
}
