#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, a;
		cin >> n;
		map<int, int> mp;
		for(int i = 0; i < n - 1; i++){
			cin >> a;
			mp[a]++;
		}
		int i = 1;
		while(i > 0){
			if(mp[i] == 0) break;
			i++;
		}
		cout << i << endl;
	}
	// Biden
	return 0;
}

