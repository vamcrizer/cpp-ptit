#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int check(str a, int n){
	if(a[0]=='0') return 0;
	for(int i=0; i<n; i++){
		if(!(a[i] >= '0' && a[i] <= '9')) return 0;
	}return 1;
}

void solve(str a, int n){
	int dem[300] = {0};
	for(int i=0; i<n; i++){
		++dem[a[i]];
	}int dk = 1;
	for(int i='0'; i<='9'; i++){
		if(dem[i] == 0){
			cout << "NO\n";
			dk = 0; break;
		}
	}if(dk) cout << "YES\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		str a; cin >> a;
		int n = a.size();
		if(!check(a, n)) cout << "INVALID\n";
		else solve(a, n);
	}
}