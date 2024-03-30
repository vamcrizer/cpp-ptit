#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cin.ignore();
		string s, word;
		vector<string> v;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> word){
			word[0] = toupper(word[0]);
			for(int i = 1; i < word.size(); i++){
				word[i] = tolower(word[i]);
			}
			v.push_back(word);
		}
		switch(n){
			case 1:
				cout << v.back() << " ";
				for(int i = 0; i < v.size() - 1; i++) cout << v[i] << " ";
				break;
			case 2:
				for(int i = 1; i < v.size(); i++) cout << v[i] << " ";
				cout << v.front() << " ";
				break;
		}
		cout << endl;
	}
	// Biden
	return 0;
}
