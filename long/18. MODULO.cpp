#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;
ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b, a%b);
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	ll a[10];
	for(int i=1; i<=4; i++){
		cin >> a[i];
	}sort(a+1, a+5);
	ll res = a[4]-a[3];
	res = gcd(res, a[3]-a[2]);
	res = gcd(res, a[2]-a[1]);
	cout << res;
}