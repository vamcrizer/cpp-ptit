#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		int pos = s.find("100");
		while(pos != -1){
			s.erase(s.begin() + pos, s.begin() + pos + 3);
			pos = s.find("100");
		}
		if(n - s.size() != 0) cout << n - s.size() << endl;
	}
	// Biden
	return 0;
}

