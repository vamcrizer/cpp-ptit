#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(int n){
	if(n % 3 == 0 || n % 10 == 3) return false;
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int k; cin >> k;
	int n = 1, cnt = 0;
	while(cnt < k){
		if(check(n)){
			cout << n << " ";
			cnt++;
		}
		if(cnt == k) break;
		n++;
	}
	cout << endl << n;
	// Biden
	return 0;
}

