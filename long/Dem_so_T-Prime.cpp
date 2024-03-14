// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int a[1000005];
void sang(){
	for(int i=2; i<=1000; i++){
		if(!a[i]){
			for(int j=i*i; j<=1000000; j+=i){
				a[j] = 1;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	sang();
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		int res = 0;
		for(int i=2; i<=sqrt(n); i++){
			if(!a[i]) ++res;
		}cout << res << endl;
	}
}