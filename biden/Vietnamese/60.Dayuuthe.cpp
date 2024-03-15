#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s, word;
		getline(cin, s);
		stringstream ss(s);
		int odd = 0, even = 0, cnt = 0;
		while(ss >> word){
			cnt++;
			if((int) (word[word.size() - 1] - '0') % 2 == 1) odd++;
			else even++;
		}
		if(cnt % 2 == 0 && even > odd) cout << "YES" << endl;
		else if(cnt % 2 && odd > even) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	// Biden
	return 0;
}
