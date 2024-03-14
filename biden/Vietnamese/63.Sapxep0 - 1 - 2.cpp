#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a;
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			cin >> a;
			mp[a]++;
		}
		for(int i = 0; i < mp[0]; i++) cout << "0 ";
		for(int i = 0; i < mp[1]; i++) cout << "1 ";
		for(int i = 0; i < mp[2]; i++) cout << "2 ";
		cout << endl;
	}
	// Biden
	return 0;
}
