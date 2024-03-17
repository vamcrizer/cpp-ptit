#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll binPow(ll a, ll b){
	if(b == 0) return 1;
	ll x = binPow(a, b / 2);
	if(b % 2) return x * x * a;
	else return x * x;
}

int nt(int n){
	if(n == 2 || n == 3) return 1;
	if(n % 2 == 0 || n % 3 == 0 || n < 2) return 0;
	for(int i = 5; i * i <= n; i += 6){
		if(n % i == 0 || n % (i + 2) == 0) return 0;
	}
	return 1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int a[6] = {2, 3, 5, 7, 11, 13};
	int cnt = 0;
	for(int i = 0; i < 6; i++){
		if(binPow(a[i], 8) < n) cnt++;
	}
	int cnt1 = 0;
	for(int i = 2; i * i <= n; i++){
		if(nt(i)){
			for(int j = 2; j * j <= n / (i * i); j++){
				if(nt(j)){
					if(i != j) cnt1++;
				}
			}
		}
	}
	cout << cnt + (cnt1 / 2);
	// Biden
	return 0;
}

