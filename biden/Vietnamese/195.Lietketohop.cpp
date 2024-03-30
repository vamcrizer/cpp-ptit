#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int X[50], n, k;
bool ok;

void sinh(){
	int i = k;
	while(i >= 1 && X[i] == n - k + i){
		--i;
	}
	if(i == 0) ok = false;
	else {
		X[i]++;
		for(int j = i + 1; j <= k; j++){
			X[j] = X[j - 1] + 1;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ok = true;
		cin >> n >> k;
		ok = true;
		for(int i = 1; i <= k; i++){
			X[i] = i;
		}
		while(ok){
			for(int i = 1; i <= k; i++){
				cout << X[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
	// Biden
	return 0;
}

