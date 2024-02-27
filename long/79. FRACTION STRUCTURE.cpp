#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

struct Fraction{
	ll a, b;
};
typedef struct Fraction f;
ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b, a%b);
}
void input(f &n){
	cin >> n.a >> n.b;
}
void simplify(f &n){
	ll u = gcd(n.a, n.b);
	n.a /= u;
	n.b /= u;
}
void print(f &n){
	cout << n.a << '/' << n.b;
}
int main() {
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}