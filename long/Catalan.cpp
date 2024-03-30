// LonggVu.
#include<bits/stdc++.h>
using namespace std;
// it's AC time! <3
#define LonggVu() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fi first
#define se second
#define pb push_back
using ll = long long int;
using ld = long double;
using str = string;

int n, r[20004], s[20004], len;

void edit(int n, int x){
	for(int i=2; i<=sqrt(n); i++){
		while(n%i==0){
			s[i] += x;
			n /= i;
		}
	}if(n != 1){
		s[n] += x;
	}
}

void nhan(int n){
	len += 10;
	for(int i=0; i<len; i++){
		r[i] *= n;
	}
	for(int i=0; i<len; i++){
		r[i+1] += r[i]/10;
		r[i] %= 10;
	}while(len > 0 && r[len-1] == 0) --len;
}

void solve(int n){
	for(int i=n+1; i<=2*n; i++){
		edit(i, 1);
		// tang cac thua so nguyen to cua (n+1)(n+2)...(2*n)
		// trên tử
	}
	for(int i=1; i<=n+1; i++){
		edit(i, -1);
		// dưới mẫu
	}
	// sau 2 vòng for trên, ta sẽ thu được các thừa số nguyên tố của số
	// catalan cần tìm, được lưu trong mảng s
	// thừa số i sẽ có số mũ là s[i]
	r[0] = len = 1;
	for(int i=1; i<20004; i++){
		while(s[i]--){
			nhan(i);
		}		
	}
	for(int i=len-1; i>=0; i--){
		cout << r[i];
	}
}

int main(){
	//LonggVu();

	cin >> n;
	solve(n+1);
}