#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
int check(int n){
	int res = 0;
	for(int i=2; i<=sqrt(n); i++){
		int tmp = 0;
		while(n%i==0){
			++res; ++tmp;
			n /= i;
			if(res>3 || tmp>1) return 0;
		}
	}if(n!=1) ++res;
	return res==3;
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(check(n)) cout << 1;
		else cout << 0;
		cout << endl;
	}
}
