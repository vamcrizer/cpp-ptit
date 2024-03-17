#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int f[30];
void fibosieve(){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i < 30; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}

bool check(int n){
	for(int i = 0; i < 30; i++){
		if(n < f[i]) return false;
		if(n == f[i]) return true;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	fibosieve();
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++){
			if(check(a[i])) cout << a[i] << " ";
		}
		cout << endl;
	}
	// Biden
	return 0;
}

