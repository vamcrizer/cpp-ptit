#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f[100];
void fibosieve(){
	f[0] = 1;
	f[1] = 1;
	for(int i = 2; i <= 92; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	fibosieve();
	while(t--){
		int n; cin >> n;
		cout << f[n - 1] << endl;
	}
	// Biden
	return 0;
}

