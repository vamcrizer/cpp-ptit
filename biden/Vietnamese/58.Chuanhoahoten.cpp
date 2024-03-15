#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s, word;
	getline(cin, s);
	stringstream ss(s);
	vector<string> v;
	while(ss >> word){
		word[0] = toupper(word[0]);
		for(int i = 1; i < word.size(); i++) word[i] = tolower(word[i]);
		v.push_back(word);
	}
	for(int i = 0; i < v.size() - 1; i++){
		cout << v[i];
		if(i == v.size() - 2) cout << ", ";
		else cout << " ";
	}
	for(int i = 0; i < v[v.size() - 1].size(); i++){
		v[v.size() - 1][i] = toupper(v[v.size() - 1][i]);
	}
	cout << v[v.size() - 1];
	// Biden
	return 0;
}

