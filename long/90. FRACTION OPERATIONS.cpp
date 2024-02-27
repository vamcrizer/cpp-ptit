#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;
int T;
ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b, a%b);
}
typedef struct frac{
	ll t, m;
}Fraction;
void read_input(Fraction &n){
	cin >> n.t >> n.m;
}
void solve(ll a, ll b){
	ll u = gcd(a, b);
	a /= u; b /= u;
	if(b < 0){
		cout << -a << '/' << -b;
	}else{
		cout << a << '/' << b;
	}
}
void process(Fraction &a, Fraction &b){
	ll boi = a.m*b.m/gcd(a.m, b.m);
	ll x = boi/a.m*a.t;
	ll y = boi/b.m*b.t;
	frac c;
	c.t = x + y; c.m = boi;
	solve(c.t*c.t, c.m*c.m);
	cout << ' ';
	solve(a.t*b.t*c.t*c.t, a.m*b.m*c.m*c.m);
	cout << endl;
}
int main() {
	int T;
	cin >> T;
	while (T--) {
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
}