#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(string s){
	for(int i = 0, j = s.size() - 1; i <= s.size() / 2; i++, j--){
		if(s[i] != s[j]) return false;
	}
	for(int i = 0; i < s.size(); i++){
		if((s[i] - '0') % 2 != 0) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	// Biden
	return 0;
}

