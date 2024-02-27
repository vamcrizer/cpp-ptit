#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int a, N, div, remain;
		cin >> a >> N;
		div = a / N;
		remain = a % N;
		int sum = ((N - 1) * N / 2) * div + (remain + 1) * remain / 2;
		if (sum == N){
			cout << 1 << endl;
		} else {
			cout << 0 << endl;
		}
	}
	// Biden
	return 0;
}
