#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void rev(int a[], int n){
	int trai=0, phai=n-1;
	while(trai<phai){
		int so = a[trai];
		a[trai] = a[phai];
		a[phai] = so;
		++trai; --phai;
	}
}
str dif(str a, str b){
	int x[1005], y[1005], z[1005], n=0, m=0, stt=0;
	for(int i=0; i<a.size(); i++){
		x[n++] = a[i] - '0';
	}rev(x, n);
	for(int i=0; i<b.size(); i++){
		y[m++] = b[i] - '0';
	}rev(y, m);
	for(int i=m; i<n; i++){
		y[i] = 0;
	}int nho = 0;
	for(int i=0; i<n; i++){
		if(x[i]<y[i]+nho){
			z[stt++] = x[i]+10-y[i]-nho;
			nho=1;
		}else{
			z[stt++] = x[i]-y[i]-nho;
			nho=0;
		}
	}str r;
	int dk=0;
	for(int i=stt-1;i>=0;i--){
		r += z[i] + '0';
	}return r;
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		str a, b; cin >> a >> b;
		if(a.size() > b.size()) cout << dif(a, b);
		else if(a.size() < b.size()) cout << dif(b, a);
		else{
			if(a>b) cout << dif(a, b);
			else cout << dif(b, a);
		}cout << endl;
	}
}