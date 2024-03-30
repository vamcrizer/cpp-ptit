#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt = 0;
		if(n % 2 == 1){
			cout << 0 << endl;
			continue;
		}
		for(int i = 1; i <= sqrt(n); i++){
			if(n % i == 0){
				int j = n / i;
				if(i != j){
					if(i % 2 == 0) cnt++;
					if(j % 2 == 0) cnt++;					
				} else {
					if(i % 2 == 0) cnt++;
				}
			}
		}
		cout << cnt << endl; 
	}
	// Biden
	return 0;
}

