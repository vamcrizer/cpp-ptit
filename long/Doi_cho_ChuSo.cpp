// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

str solve(str a, int n){
	int pos = n;
	for(int i=n-1; i>0; i--){
		if(a[i] < a[i-1]){
			pos = i; break;
		}
	}char c = 0;
	int vt = pos - 1;
	for(int i=pos; i<n; i++){
		if(a[i] > c && a[i] < a[pos - 1]){
			c = a[i];
			vt = i;
		}
	}if(vt == pos - 1) return "-1";
	else{
		swap(a[pos-1], a[vt]);
		if(a[0] == '0') return "-1";
		return a;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		str a; cin >> a;
		cout << solve(a, a.size()) << endl;
	}
}