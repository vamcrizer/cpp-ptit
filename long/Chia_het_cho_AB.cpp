// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}

int kq(int m, int n, int x){
	if(x > n) return 0;
	int begin = m/x;
	if(begin*x != m) m = x*(begin+1);
	int end = n/x;
	if(end*x != n) n = x*end;
	int res = (n - m)/x + 1;
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		int boi = a*b/gcd(a, b);
		int res = kq(m, n, a) + kq(m, n, b) - kq(m, n, boi);
		cout << res << endl;
	}	
}