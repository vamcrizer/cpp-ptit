#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;
ld r[10005];
void solve(){
	r[1] = 1;
	for(int i=2; i<=10005; i++){
		r[i] = sqrt(r[i-1] + i);
	}
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	
	solve();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << fixed << setprecision(5) << r[n] << endl;
	}
}