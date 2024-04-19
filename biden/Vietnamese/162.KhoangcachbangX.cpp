#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, x, check = -1;
		cin >> n >> x;
		int a[n];
		set<int> se;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		// find a set:
		// if found => iterator pos
		// else => iterator end
		for(int i = 0; i < n; i++){
			int tmp = x + a[i];
			if(se.find(tmp) != se.end() && check == -1){
				check = 1;
				break;
			}
		}
		cout << check << endl;
	}
	// Biden
	return 0;
}

