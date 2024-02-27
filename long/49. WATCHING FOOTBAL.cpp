#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	
	int n; cin >> n;
	int a[n+5]; a[0] = 0;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}int res = 0, dk = 1;
	for(int i=1; i<=n; i++){
		if(res + 15 >= a[i]){
			res = a[i];
		}else{
			res += 15;
			dk = 0; break;
		}
	}if(dk){
		if(90 - res <= 15) res = 90;
		if(res + 15 < 90) res += 15;
	}cout << res;
}