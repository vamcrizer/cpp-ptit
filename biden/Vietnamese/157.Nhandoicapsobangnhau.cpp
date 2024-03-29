#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n - 1; i++){
			if(a[i] != 0 && a[i] == a[i + 1]){
				a[i] += a[i + 1];
				a[i + 1] = 0;
			}
		}
		for(int i = 0; i < n; i++) if(a[i]) cout << a[i] << " ";
		for(int i = 0; i < n; i++) if(!a[i]) cout << a[i] << " ";
		cout << endl;
	}
	// Biden
	return 0;
}

