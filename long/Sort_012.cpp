// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int dem[5];
void sx(int a[], int n){
	for(int i=0; i<=2; i++){
		for(int j=1; j<=dem[i]; j++){
			cout << i << ' ';
		}
	}cout << endl;
}

int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		memset(dem, 0, sizeof(dem));
		int n; cin >> n;
		int a[n+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
			++dem[a[i]];
		}sx(a, n);
	}
}