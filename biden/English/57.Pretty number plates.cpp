#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int qual = 0;
		int cnt = 0;
		if(s[5] < s[6] && s[6] < s[7] && s[7] < s[9] && s[9] < s[10]) qual++;
		if(s[5] == s[6] && s[6] == s[7] && s[9] == s[10]) qual++;
		for(int i = 5; i < s.size(); i++){
			if(s[i] == '6' || s[i] == '8') cnt++;
		}
		if(cnt == 5) qual++;
		if(qual != 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	// Biden
	return 0;
}

