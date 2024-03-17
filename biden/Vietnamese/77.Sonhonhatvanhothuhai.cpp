#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		set<int> se;
		int n; cin >> n;
		int a;
		for(int i = 0; i < n; i++){
			cin >> a;
			se.insert(a);
		}
		if(se.size() < 2) cout << -1;
		else cout << *(se.begin()) << " " << *next((se.begin()), 1);
		cout << endl;
	}
	// Biden
	return 0;
}
