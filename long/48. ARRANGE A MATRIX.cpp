#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	
	int n, m, k; cin >> n >> m >> k;
	int a[n+5][m+5];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> a[i][j];
		}
	}
	for(int i=1; i<=n; i++){
		int m = i;
		for(int j=i+1; j<=n; j++){
			if(a[j][k] < a[m][k]) m = j;
		}swap(a[i][k], a[m][k]);
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cout << a[i][j] << ' ';
		}cout << endl;
	}
}