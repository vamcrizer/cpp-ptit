#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	ll tmp = 1, sum = 0;
	for(int i = 1; i <= n; i++){
		tmp *= i;
		sum += tmp;
	}
	cout << sum;
	// Biden
	return 0;
}

