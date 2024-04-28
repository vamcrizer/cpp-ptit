#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, k, a;
		cin >> n >> k;
		vector<int> v;
		for(int i = 0; i < n; i++){
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		cout << v[k - 1] << endl;
	}
	// Biden
	return 0;
}

