#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
int check(int n){
	int t = sqrt(n);
	return t*t==n;
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int a, b; cin >> a >> b;
	int res = 0;
	for(int i=a; i<=b; i++){
		if(check(i)) res += i;
	}cout << res;
}