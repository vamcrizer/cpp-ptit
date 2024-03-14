// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int check(str a){
	int n = a.size();
	int l = 0, r = n - 1;
	while(l < r){
		if(a[l] != a[r]) return 0;
		if((a[l] - '0')%2==1 || (a[r] - '0')%2==1) return 0;
		++l; --r;
	}return 1;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		str a; cin >> a;
		if(check(a)) cout << "YES\n";
		else cout << "NO\n";
	}
}