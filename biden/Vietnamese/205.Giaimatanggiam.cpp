#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		int len = s.size(), cnt = 1, idx = 0;
		while(idx < len){
			if(s[idx] == 'I'){
				cout << cnt;
				cnt++;
			} else {
				int temp = idx;
				while(idx < len && s[idx] == 'D'){
					idx++;
				}
				for(int j = cnt + idx - temp; j >= cnt; j--){
					cout << j;
				}
				cnt += idx + 1 - temp;
			}
			idx++;
		}
		if(s[len - 1] == 'I'){
			cout << cnt;
		}
		cout << endl;
	}
	// Biden
	return 0;
}

