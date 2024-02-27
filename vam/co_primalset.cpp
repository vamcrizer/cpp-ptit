#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		ll n, m; cin >> n >> m;
		ll sum = (n + 1) * n / 2;
		ll x = (sum + m) / 2;
		if(x * 2 != sum + m){
			cout << "No\n";
			continue;
		}
        ll y = sum - x;
		if(__gcd(x, y) == 1){
             cout << "Yes\n";
		} else { 
            cout << "No\n";
        }
	}
}