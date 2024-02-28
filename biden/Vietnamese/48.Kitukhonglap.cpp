#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string a;
		cin >> a;
		map<char, int> mp;
		for(int i = 0; i < a.size(); i++){
			mp[a[i]]++;
		}
		for(int i = 0; i < a.size(); i++){
			if(mp[a[i]] == 1){
				cout << a[i];
				mp[a[i]] = 0;
			}
		}
		cout << endl;
	}

	// Biden
	return 0;
}
