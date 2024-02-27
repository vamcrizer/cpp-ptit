#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		char x; cin >> x;
		if(x>='A' && x<='Z') x += 32;
		else x -= 32;
		cout << x << endl;
	}
}