// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(str a){
	int n = a.size(), res = n, dem[300] = {0};
	for(int i=0; i<n; i++){
		++dem[a[i]];
	}
	for(int i=0; i<n; i++){
		int x = dem[a[i]];
		if(x > 0){
			res += x*(x-1)/2;
			dem[a[i]] = 0;
		}
	}cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		str a; cin >> a;
		solve(a);
	}
}