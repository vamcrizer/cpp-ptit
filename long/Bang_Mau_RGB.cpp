// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

ll gt[25];
void init(){
	gt[0] = 1;
	for(int i=1; i<=20; i++){
		gt[i] = gt[i-1] * i;
	}
}

void solve(int n, int r, int b, int g){
	ll res = 0;
	for(int i=r; i<=n-b-g; i++){
		for(int j=b; j<=n-i-g; j++){
			int k = n - i - j;
			res += (gt[n])/(gt[i] * gt[j] * gt[k]);
		}
	}cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	init();
	int t; cin >> t;
	while(t--){
		int n, r, b, g;
		cin >> n >> r >> b >> g;
		solve(n, r, b, g);
	}
}