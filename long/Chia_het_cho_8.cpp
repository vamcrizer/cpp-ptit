// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int count(str a, int n, int m){
	int res = 0;
	for(int i=0; i<n; i++){
		int sum = 0;
		for(int j=i; j<n; j++){
			sum = sum*10 + (a[j] - '0');
			sum %= m;
			if(sum==0) ++res;
		}
	}return res;
}

void solve(str a, int n){
	cout << count(a, n, 8) - count(a, n, 24) << endl;
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