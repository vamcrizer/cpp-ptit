#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
ll r[25];
ll gt(int n){
	ll res = 1;
	for(int i=2; i<=n; i++){
		res *= i;
	}return res;
}
void solve(int n){
	for(int i=1; i<=n; i++){
		r[i] = r[i-1] + gt(i);
	}cout << r[n];
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int n; cin >> n;
	solve(n);
}