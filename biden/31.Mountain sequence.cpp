#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int mountain_check(int a[], int n, int l, int r){
	if(r - l == 1) return 1;
	int breakidx = -1;
	for(int i = l; i < r; i++){
		if(a[i] > a[i + 1]){
			breakidx = i;
			break;
		}
	}
	if(breakidx != -1){
		for(int i = breakidx; i <= r - 1; i++){
			if(a[i] < a[i + 1]){
				breakidx = -2;
				break;
			}
		}
	}
	if(breakidx == -2) return 0;
	return 1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int l, r;
		cin >> l >> r;
		if(mountain_check(a, n, l, r)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	// Biden
	return 0;
}

