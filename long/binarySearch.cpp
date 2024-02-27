// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int binarySearch(int a[], int n, int x){
	int l = 1, r = n;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m]==x) return 1;
		else if(a[m] > x) r = m - 1;
		else l = m + 1;
	}return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}sort(a+1, a+n+1);
		cout << binarySearch(a, n, x) << endl;
	}	
}