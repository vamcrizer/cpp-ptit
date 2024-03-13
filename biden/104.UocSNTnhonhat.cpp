#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int nt[100001];
void sieve(){
	for(int i = 0; i <= 100000; i++){
		nt[i] = i;
	}
	for(int i = 2; i <= sqrt(INT_MAX); i++){
		if(nt[i]){
			for(int j = i * i; j <= 100000; j += i){
				if(nt[j] == j) nt[j] = i;
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
		for(int i = 1; i <= n; i++){
			cout << nt[i] << " ";
		}
		cout << endl;
	}
	// Biden
	return 0;
}

