#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
		ll sum = 0;
		for(int i=1; i<=n; i++){
			sum += i%k;
		}if(sum==k) cout << 1;
		else cout << 0;
		cout << endl;
	}
}