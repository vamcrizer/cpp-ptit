// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(str a, int k){
	int n = a.size(), dem[300] = {0};
	for(int i=0; i<n; i++){
		++dem[a[i]];
	}int cnt = 0;
	for(int i='a'; i<='z'; i++){
		if(dem[i] == 0) ++cnt;
	}if(k >= cnt) cout << 1;
	else cout << 0;
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		str a; int k;
		cin >> a >> k;
		solve(a, k);
	}
}