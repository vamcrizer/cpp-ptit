#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s, word;
		vector<string> v;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> word){
			v.push_back(word);
		}
		for(int i = v.size() - 1; i >= 0; i--){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	// Biden
	return 0;
}

