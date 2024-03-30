#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		int ans = 0;
		int tmp = 0;
		for(int i = 0; i < s.size(); i++){
			if(isdigit(s[i])){
				tmp = tmp * 10 + s[i] - '0';
			} else {
				ans += tmp;
				tmp = 0;
			}
		}
		ans += tmp;
		cout << ans << endl;
	}
	// Biden
	return 0;
}
