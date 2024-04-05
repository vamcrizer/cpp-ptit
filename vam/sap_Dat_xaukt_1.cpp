#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(str a, int n){
	int dem[300] = {0}, ma = 0;
	char c;
	for(int i=0; i<n; i++){
		++dem[a[i]];
		if(dem[a[i]] > ma){
			ma = dem[a[i]];
			c = a[i];
		}
	}if(dem[c] - 1 <= n - dem[c]) cout << "1\n";
	else cout << "0\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		str a; cin >> a;
		solve(a, a.size());
	}
}