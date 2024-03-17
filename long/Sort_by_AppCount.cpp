// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int cmp(pair<int, int> &n, pair<int, int> &m){
	if(n.second == m.second) return n.first < m.first;
	return n.second > m.second;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5], dem[123456] = {0};
		for(int i=1; i<=n; i++){
			cin >> a[i];
			++dem[a[i]];
		}int stt = 0;
		pair<int, int> r[n+5];
		for(int i=1; i<=n; i++){
			if(dem[a[i]] > 0){
				r[stt].first = a[i];
				r[stt].second = dem[a[i]];
				++stt; dem[a[i]] = 0;
			}
		}sort(r, r+stt, cmp);
		for(int i=0; i<stt; i++){
			for(int j=1; j<=r[i].second; j++){
				cout << r[i].first << ' ';
			}
		}cout << endl;
	}
}