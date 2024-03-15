#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	ll sum = 0, mul = 1;
	int i = 1;
	while(i <= n){
		mul *= i;
		sum += mul;
		i++;
	}
	cout << sum;
	// Biden
	return 0;
}
