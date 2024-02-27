#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int check(ll n){
	if(n%3==0 || n%10==3) return 0;
	return 1;
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	
	int n; cin >> n;
	ll x = 1;
	while(1){
		if(check(x)) --n;
		if(n==0) break;
		++x;
	}cout << x;
}