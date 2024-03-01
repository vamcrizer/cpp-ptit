// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(pair<ld, ld> a[], int n){
	ld res = 0;
	for(int i=0; i<n; i++){
		res += a[i].first * a[(i+1)%n].second - a[i].second * a[(i+1)%n].first;
	}cout << fixed << setprecision(3) <<  abs(res)/2 << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		pair<ld, ld> a[n+5];
		for(int i=0; i<n; i++){
			cin >> a[i].first >> a[i].second;
		}solve(a, n);
	}
}