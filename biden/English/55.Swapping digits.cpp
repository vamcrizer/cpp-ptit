#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void check(string s){
	char smin = s[0];
	int idx = 0;
	int flag = 1;
	for(int i = 0; i < s.size() - 1; i++){
		if(s[i] > s[i + 1]){
			flag = 0;
			break;
		}
	}
	if(flag) cout << -1 << endl;
	else {
		for(int i = 1; i < s.size(); i++){
			if((int) smin > (int) s[i]){
				smin = s[i];
				idx = i;
			}
		}
		for(int i = 0; i < s.size(); i++){
			if(s[i] < smin){
				char temp = s[i];
				s[i] = s[idx];
				s[idx] = temp;
				break;
			}
		}
		cout << s << endl;		
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		check(s);
	}
	// Biden
	return 0;
}

