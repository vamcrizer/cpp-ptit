#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
int nt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}return n>1;
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int dk = 0;
		for(int i=2; i<=n/2; i++){
			if(nt(i) && nt(n-i)){
				cout << i << ' ' << n-i << endl;
				dk = 1; break;
			}
		}if(!dk) cout << -1 << endl;
	}
}