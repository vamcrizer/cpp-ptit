#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double f[10005];
void sieve(){
	f[0] = 0;
	for(int i = 1; i <= 10000; i++){
		f[i] = sqrt(i + f[i - 1]);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	sieve();
	while(t--){
		int n; cin >> n;
		cout << fixed << setprecision(5);
		cout << f[n] << endl;
	}
	// Biden
	return 0;
}
