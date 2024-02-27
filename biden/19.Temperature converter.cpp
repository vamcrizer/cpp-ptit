#include <bits/stdc++.h>
using namespace std;

void CtoF(int n){
	double f = (1.0 * n * 9) / 5 + 32;
	cout << fixed << setprecision(2);
	cout << f;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	CtoF(n);
	// Biden
	return 0;
}
