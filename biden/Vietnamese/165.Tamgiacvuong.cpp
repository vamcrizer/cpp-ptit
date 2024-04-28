#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<ll> v;
		ll a;
		int flag = 0;
		for(int i = 0; i < n; i++){
			cin >> a;
			v.push_back(a * a);
		}
		sort(v.begin(), v.end());
		for(int i = n - 1; i >= 2; i--){
			int j = 0, k = i - 1;
			while(j < k){
				if(v[j] + v[k] == v[i]){
					flag = 1;
					break;
				} else if(v[j] + v[k] < v[i]) j++;
				else k--;
			}
			if(flag) break;
		}
		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	// Biden
	return 0;
}

