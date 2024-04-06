#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, a[30];
bool ok;

void sinh(){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1]){
		--i;
	}
	if(i == 0) ok = false;
	else {
		int j = n;
		while(a[i] > a[j]){
			--j;
		}
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		cin >> n;
		// ktao
		ok = true;
		for(int i = 1; i <= n; i++) a[i] = i;
		// sinh
		while(ok){
			for(int i = 1; i <= n; i++){
				cout << a[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
	// Biden
	return 0;
}

