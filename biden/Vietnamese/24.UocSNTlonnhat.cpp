#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void pt(ll n){ 
	map<ll, ll> mp;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			mp[i]++;
			n /= i;
		}
	}
	if(n > 1) mp[n]++;
	auto it = mp.end();
	it--;
	cout << it->first << endl;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		pt(n);
	}
	// Biden
	return 0;
}
