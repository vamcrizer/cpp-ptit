#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Fraction{
	public:
		ll tu, mau;
		Fraction(ll tre, ll em);
		friend void thaidui(Fraction&);
		friend istream& operator >> (istream &in, Fraction &a);
		friend ostream& operator << (ostream &out, Fraction a);
};

Fraction::Fraction(ll tre, ll em){
	tu = tre;
	mau = em;
}

istream& operator >> (istream &in, Fraction &a){
	cin >> a.tu >> a.mau;
	return in;
}

ostream& operator << (ostream &out, Fraction a){
	cout << a.tu << "/" << a.mau;
	return out;
}

void thaidui(Fraction &a){
	ll tmp = __gcd(a.tu, a.mau);
	a.tu /= tmp;
	a.mau /= tmp;
}

void sum_fraction(Fraction &a, Fraction &b, Fraction &c){
	c.tu = a.tu * b.mau + a.mau * b.tu;
	c.mau = a.mau * b.mau;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	Fraction a(727, 727);
	Fraction b(727, 727);
	Fraction c(727, 727);
	cin >> a >> b;
	sum_fraction(a, b, c);
	thaidui(c);
	cout << c;
	// Biden
	return 0;
}
