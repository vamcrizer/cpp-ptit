// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int solve(int a[], int s[], int n){
	for(int i=1; i<=n; i++){
		int trai = s[i-1], phai = s[n] - s[i];
		if(trai == phai) return i;
	}return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5], s[n+5];
		s[0] = 0;
		for(int i=1; i<=n; i++){
			cin >> a[i];
			s[i] = s[i-1] + a[i];
		}cout << solve(a, s, n) << endl;
	}
}