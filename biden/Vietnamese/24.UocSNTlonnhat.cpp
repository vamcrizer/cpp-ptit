#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void pt(ll n){
	vector<ll> v;
	while(n % 2 == 0){
		n /= 2;
		v.push_back(2);
	}
	for(int i = 3; i <= sqrt(n); i += 2){
		while(n % i == 0){
			n /= i;
			v.push_back(i);
		}
	}
	if(n > 1) v.push_back(n);
	cout << *(v.end() - 1) << endl;
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
