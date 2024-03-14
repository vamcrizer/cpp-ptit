#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void pt(int n){
	int count;
	for(int i = 2; i <= sqrt(n); i++){
		count = 0;
		while(n % i == 0){
			count++;
			n /= i;
		}
		if(count) cout << i << " " << count << endl;
	}
	if(n > 1) cout << n << " 1";
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	pt(n);
	// Biden
	return 0;
}

