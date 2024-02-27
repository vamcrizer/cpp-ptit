#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void in(int a[][55], int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout << a[i][j] << ' ';
		}cout << endl;
	}
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	
	int n; cin >> n;
	int a[55][55] = {0};
	a[1][n] = 1;
	for(int i=n-1; i>=1; i--){
		a[1][i] = a[1][i+1] + (n-i);
	}
	for(int i=2; i<=n; i++){
		for(int j=n; j>=i; j--){
			a[i][j] = a[i-1][j-1] + 1;
		}
	}
	for(int i=2; i<=n; i++){
		for(int j=i-1; j>=1; j--){
			a[i][j] = a[i-1][j] + n-i+j+1;
		}
	}in(a, n);
}