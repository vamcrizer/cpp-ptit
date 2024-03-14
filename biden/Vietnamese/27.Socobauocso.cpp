#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool nt[1000001];
void sieve(){
	memset(nt, true, sizeof(nt));
	nt[0] = nt[1] = false;
	for(int i = 2; i <= 46340; i++){
		if(nt[i]){
			for(int j = i * i; j <= 1000000; j += i){
				nt[j] = false;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	sieve();
	while(t--){
		int n; cin >> n;
		for(int i = 2; i * i <= n; i++){
			if(nt[i]) cout << i * i << " ";
		}
		cout << endl;
	}
	// Biden
	return 0;
}
