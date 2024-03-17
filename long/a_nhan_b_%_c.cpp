// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

str nhan(str x, str y){
	int n = x.size(), m = y.size();
	int a[20], b[20], c[456] = {0};
	for(int i=0; i<n; i++){
		a[i] = x[i] - '0';
	}
	for(int i=0; i<m; i++){
		b[i] = y[i] - '0';
	}
	int res = 0;
	for(int i=n-1; i>=0; i--){
		int nho = 0, stt = n - i - 1;
		for(int j=m-1; j>=0; j--){
			int tmp = a[i]*b[j] + nho;
			int x = c[stt] + tmp;
			c[stt] = x%10;
			nho = x/10;
			++stt;
		}while(nho > 0){
			int x = c[stt] + nho;
			c[stt] = x%10;
			nho = x/10;
			++stt;
		}if(stt > res) res = stt;
	}str r;
	int dk = 0;
	for(int i=res-1; i>=0; i--){
		if(c[i] != 0) dk = 1;
		if(dk==1){
			r += to_string(c[i]);
		}
	}if(!dk) return "0";
	return r;
}

ll kq(str a, ll x){
	ll res = 0;
	int n = a.size();
	for(int i=0; i<n; i++){
		res = res*10 + (a[i] - '0');
		res %= x;
	}return res%x;
}

void solve(str a, str b, ll c){
	str r = nhan(a, b);
	cout << kq(r, c) << endl;
}

int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		str a, b; cin >> a >> b;
		ll c; cin >> c;
		solve(a, b, c);
	}
}