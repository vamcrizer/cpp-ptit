// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int nt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}return n>1;
}

int tang(int n){
	while(n >= 10){
		if(n%10 <= (n/10)%10) return 0;
		n /= 10;
	}return 1;
}

int giam(int n){
	while(n >= 10){
		if(n%10 >= (n/10)%10) return 0;
		n /= 10;
	}return 1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int x = (int)pow(10, n-1);
		int y = (int)pow(10, n);
		int res = 0;
		for(int i=x; i<=y; i++){
			if((tang(i) || giam(i)) && nt(i)) ++res;
		}cout << res << endl;
	}
}