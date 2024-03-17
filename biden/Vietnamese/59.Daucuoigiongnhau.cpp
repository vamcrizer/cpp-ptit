#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		int cnt = 0;
		for(int i = 0; i < s.size(); i++){
			for(int j = i; j < s.size(); j++){
				if(s[i] == s[j]) cnt++;
			}
		}
		cout << cnt << endl;
	}
	// Biden
	return 0;
}

