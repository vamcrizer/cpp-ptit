#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll a, N, div, remain;
		cin >> a >> N;
		div = a / N;
		remain = a % N;
		ll sum = ((N - 1) * N / 2) * div + (remain + 1) * remain / 2;
		cout << sum << endl;
	}
	// Biden
	return 0;
}
