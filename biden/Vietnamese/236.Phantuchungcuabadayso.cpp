#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, m, p, i, j, k;
		cin >> n >> m >> p;
		ll a[n], b[m], c[p];
		set<ll> se;
		for(int id = 0; id < n; id++) cin >> a[id];
		for(int id = 0; id < m; id++) cin >> b[id];
		for(int id = 0; id < p; id++) cin >> c[id];
		i = j = k = 0;
		while(i < n && j < m && k < p){
			if(a[i] == b[j] && a[i] == c[k]){
				se.insert(a[i]);
				i++, j++, k++;
			}
			else if(a[i] < b[j]) i++;
			else if(b[j] < c[k]) j++;
			else k++;
		}
		if(se.size() == 0) cout << -1 << endl;
		else {
			for(ll x : se) cout << x << " ";
			cout << endl;
		}
	}
	// Biden
	return 0;
}

