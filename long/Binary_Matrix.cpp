// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int check(int a[]){
	int mot = 0;
	for(int i=1; i<=3; i++){
		if(a[i]==1) ++mot;
	}return mot >= 2;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
	int a[n+5][5];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=3; j++){
			cin >> a[i][j];
		}
	}int res = 0;
	for(int i=1; i<=n; i++){
		res += check(a[i]);
	}cout << res;
}