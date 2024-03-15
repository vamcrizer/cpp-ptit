// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;



int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n+5], dem = 0, stt = 0, x;
		while(n--){
			cin >> x;
			if(x > 0) a[stt++] = x;
			else ++dem;
		}
		for(int i=0; i<stt; i++){
			cout << a[i] << ' ';
		}
		for(int i=1; i<=dem; i++){
			cout << 0 << ' ';
		}cout << endl;
	}
}