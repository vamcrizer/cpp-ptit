#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f[100];
void fibosieve(){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= 92; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}

bool check(ll n){
	for(int i = 0; i <= 92; i++){
		if(n < f[i]) return false;
		if(n == f[i]) return true;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	fibosieve();
	while(t--){
		ll n;
		cin >> n;
		if(check(n)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	// Biden
	return 0;
}

