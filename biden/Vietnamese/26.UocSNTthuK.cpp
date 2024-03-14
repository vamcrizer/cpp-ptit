#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void pt(int n, int k){
	int cnt = 1;
	map<int, int> mp;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			mp[cnt++] = i;
			n /= i;
		}
	}
	if(n > 1) mp[cnt++] = n;
	if(k < cnt) cout << mp[k] << endl;
	else cout << -1 << endl;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		pt(n, k);
	}
	// Biden
	return 0;
}
