#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] > 0) mp[a[i]]++;
		}
		int i = 1;
		while(i > 0){
			if(mp[i] == 0){
				cout << i << endl;
				break;
			}
			i++;
		}
	}
	// Biden
	return 0;
}

