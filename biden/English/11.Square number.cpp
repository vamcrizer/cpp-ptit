#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll findSum(int n){
	return 1ll * n * (n + 1) * (2 * n + 1) / 6;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b;
	cin >> a >> b;
	int l = ceil(sqrt(a));
	int r = sqrt(b);
	cout << findSum(r) - findSum(l - 1);
	// Biden
	return 0;
}
