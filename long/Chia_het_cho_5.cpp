// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int powm(int a, int b){
	int res = 1;
	while(b){
		if(b%2==1){
			res *= a;
			res %= 10;
		}
		b /= 2;
		a *= a;
		a %= 10;
	}return res%10;
}

int check(str a){
	int n = a.size(), res = 0;
	for(int i=n-1; i>=0; i--){
		if(a[i]=='1'){
			res += powm(2, n-i-1);
			res %= 10;
		}
	}return res%5==0;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		str a; cin >> a;
		if(check(a)) cout << "Yes\n";
		else cout << "No\n";
	}
}