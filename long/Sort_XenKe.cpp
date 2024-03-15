// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(int a[], int n){
	int x = n/2, b[x+5], c[x+5], stt = 0, cnt = 0;
	for(int i=n; i>=n-x+1; i--){
		b[stt++] = a[i]; 
	}
	for(int i=1; i<=n-x; i++){
		c[cnt++] = a[i];
	}
	for(int i=0; i<stt; i++){
		cout << b[i] << ' ' << c[i] << ' ';
	}if(stt < cnt) cout << c[cnt-1];
	cout << endl;
}

int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5];
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}sort(a+1, a+n+1);
		solve(a, n);
	}
}