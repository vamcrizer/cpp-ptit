#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		int cnt = 0;
		string s, word;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> word){
			cnt++;
		}
		cout << cnt << endl;
	}
	// Biden
	return 0;
}

