#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> v;
		int a;
		for(int i = 0; i < n; i++){
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(), v.end(), greater<int>());
		for(int i = 0; i < k; i++){
			cout << *(v.begin() + i) << " ";
		}
		cout << endl;
	}
	// Biden
	return 0;
}

