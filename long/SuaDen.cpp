// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k, b; cin >> n >> k >> b;
	int a[n+5], x;
	memset(a, 1, sizeof(a));
	for(int i=1; i<=b; i++){
		cin >> x;
		a[x] = 0;
	}int res = 1e7;
	for(int i=1; i<=n-k+1; i++){
		int dem = 0;
		for(int j=i; j<i+k; j++){
			if(a[j]==0) ++dem;
		}res = min(res, dem);
	}cout << res;
}