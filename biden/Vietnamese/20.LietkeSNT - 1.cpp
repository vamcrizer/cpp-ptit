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
	sieve();
	int l, r;
	cin >> l >> r;
	if(r < l) swap(l, r);
	for(int i = l; i <= r; i++){
		if(nt[i]) cout << i << " ";
	}
	// Biden
	return 0;
}

