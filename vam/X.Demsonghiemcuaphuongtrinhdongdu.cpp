#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int b, p;
		cin >> b >> p;
		ll cnt = 0;
		for(int i = 1; i <= p; i++){
			if(1ll * i * i % p == 1){
				ll maxx = i + b / p * p;
				maxx = (maxx > b) ? maxx - p : maxx;
				cnt += (maxx - i) / p + 1;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

