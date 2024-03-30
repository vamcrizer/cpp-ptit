// LonggVu.
#include<bits/stdc++.h>
using namespace std;
// it's AC time! <3
#define LonggVu() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fi first
#define se second
#define pb push_back
using ll = long long int;
using ld = long double;
using str = string;

int check(int a[], int n){
	for(int i=1; i<=n; i++){
		if(a[i] != 0) return 1;
	}return 0;
}

void solve(int a[], int n){
	ll res = 0;
	while(1){
		for(int i=1; i<=n; i++){
			if(a[i]%2 == 1){
				--a[i]; ++res;
			}
		}
		if(!check(a, n)) break;
		for(int i=1; i<=n; i++){
			a[i] /= 2;
		}++res;
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
		}solve(a, n);
	}
}