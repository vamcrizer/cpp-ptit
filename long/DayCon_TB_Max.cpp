// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n+5], r[n+5];
		r[0] = 0;
		for(int i=1; i<=n; i++){
			cin >> a[i];
			r[i] = r[i-1] + a[i];
		}int x = 1, m = -1e7;
		for(int i=1; i<=n-k+1; i++){
			int j = i+k-1;
			int sum = r[j] - r[i-1];
			if(sum > m){
				m = sum;
				x = i;
			}
		}for(int i=x; i<=x+k-1; i++){
			cout << a[i] << ' ';
		}cout << endl;
	}	
}