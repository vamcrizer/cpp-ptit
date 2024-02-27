#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void rev(int a[], int n){
	int l = 0, r = n-1;
	while(l<r){
		swap(a[l], a[r]);
		++l; --r;
	}
}
str sum(str a, str b){
	int n = a.size(), m = b.size(), stt = 0;
	int x[12345], y[12345], z[12345];
	for(int i=0; i<n; i++){
		x[i] = a[i] - '0';
	}rev(x, n);
	for(int i=0; i<m; i++){
		y[i] = b[i] - '0';
	}rev(y, m);
	for(int i=m; i<n; i++){
		y[i] = 0;
	}int nho=0;
	for(int i=0; i<n; i++){
		int kq = x[i] + y[i] + nho;
		z[stt++] = kq%10;
		nho = kq/10;
	}if(nho==1) z[stt++] = nho;
	str r = {'\0'};
	for(int i=stt-1; i>=0; i--){
		r += (z[i] + '0');
	}return r;
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		str a, b; cin >> a >> b;
		if(a.size() >= b.size()) cout << sum(a, b);
		else cout << sum(b, a);
		cout << endl;
	}
}