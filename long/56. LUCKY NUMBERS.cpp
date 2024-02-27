#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

str sum(str a){
	int n = a.size(), res = 0;
	for(int i=0; i<n; i++){
		res += a[i] - '0';
	}str r;
	while(res){
		r += (res%10 + '0');
		res /= 10;
	}return r;
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		str a; cin >> a;
		while(a.size() != 1){
			a = sum(a);
		}if(a=="9") cout << 1 << endl;
		else cout << 0 << endl;
	}
}