// LonggVu.
#include<bits/stdc++.h>
using namespace std;
// it's AC time! <3
#define LonggVu() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long int;
using ld = long double;
using str = string;

void solve(int a[], int n){
	int m = *max_element(a+1, a+n+1), res = 0;
	for(int i=1; i<=m; i++){
		int dk = 1, tmp = a[1]%i;
		for(int j=2; j<=n; j++){
			if(a[j]%i != tmp){
				dk = 0; break;
			}
		}res += dk;
	}cout << res << endl;
}

int main(){
	LonggVu();

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}sort(a+1, a+n+1);
		if(n < 2){
			cout << "0\n";
		}else solve(a, n);
	}
}