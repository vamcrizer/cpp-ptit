#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int checkdiv(string s){
	int s1 = 0, s2 = 0;
	for(int i = 0; i < s.size(); i += 2) s1 += (int) s[i] - '0';
	for(int i = 1; i < s.size(); i += 2) s2 += (int) s[i] - '0';
	if((s1 - s2) % 11 == 0) return 1;
	return 0;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << checkdiv(s) << endl;
	}
	// Biden
	return 0;
}
