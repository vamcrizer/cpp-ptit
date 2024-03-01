// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void in(int a[][105], int n){
	for(int i=1; i<=n; i++){
		int x = 1;
		if(i%2==0) x = n;
		for(int j=1; j<=n; j++){
			cout << a[i][x] << ' ';
			if(i%2==1) ++x;
			else --x;
		}
	}cout << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[105][105];
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				cin >> a[i][j];
			}
		}in(a, n);
	}
}