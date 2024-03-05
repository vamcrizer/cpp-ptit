#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool ok;
int X[25];

void sinh(int n){
	int i = n;
	while(i >= 1 && X[i] == 1){
		X[i] = 0;
		--i;
	}
	if(i == 0) ok = false;
	else X[i] = 1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ok = true;
		// ktao()
		for(int i = 0; i < n; i++){
			X[i] = 0;
		}
		// while(chua phai cau hinh cuoi)
		while(ok){
			for(int i = 1; i <= n; i++){
				cout << X[i];
			}
			cout << " ";
			sinh(n);
		}
		cout << endl;
	}
	// Biden
	return 0;
}

