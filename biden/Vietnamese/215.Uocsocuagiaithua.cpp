#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll n, p, d = 0;
        cin >> n >> p;
        for(int i = 2; i <= n; i++){
            ll x = i;
            while(x % p == 0){
                ++d;
                x /= p;
            }
        }
        cout << d << endl;
	}
	// Biden
	return 0;
}

