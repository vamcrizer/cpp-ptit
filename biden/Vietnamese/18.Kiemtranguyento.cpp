#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int nt(int m){
	if(m == 2 || m == 3){
		return 1;
	}
	if(m % 2 == 0 || m % 3 == 0 || m < 2){
		return 0;
	}
	for(int i1 = 5; i1 * i1 <= m; i1 += 6){
		if(m % i1 == 0 || m % (i1 + 2) == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	if(nt(n)) cout << "YES";
	else cout << "NO";
	// Biden
	return 0;
}

