#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	int flag = 1;
	while(cin >> s){
		for(int i = 0; i < s.size(); i++){
			if(s[i] >= 'A' && s[i] <= 'Z') s[i] = tolower(s[i]);
		}
		if(flag){
			s[0] = toupper(s[0]);
			flag = 0;
		}
		if(s[s.size() - 1] == '.' || s[s.size() - 1] == '?' || s[s.size() - 1] == '!'){
			flag = 1;
			s.erase(s.end() - 1);
			cout << s << endl;
		} else {
			cout << s << " ";
		}
	}
	// Biden
	return 0;
}

