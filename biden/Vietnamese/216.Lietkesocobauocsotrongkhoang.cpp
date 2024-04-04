#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool nt[1000001];
void sieve(){
	memset(nt, true, sizeof(nt));
	nt[0] = nt[1] = false;
	for(int i = 2; i <= 46340; i++){
		if(nt[i]){
			for(int j = i * i; j <= 1000000; j += i){
				nt[j] = false;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	sieve();
	while(t--){
		ll l, r;
		int cnt = 0;
		cin >> l >> r;
		l = ceil(sqrt(l));
		r = sqrt(r);
		for(int i = (int) l; i <= (int) r; i++){
			if(nt[i]) cnt++;
		}
		cout << cnt << endl;
	}
	// Biden
	return 0;
}
