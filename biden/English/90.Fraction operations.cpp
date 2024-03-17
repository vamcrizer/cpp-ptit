#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Fraction{
	ll tu, mau;
};

void sum_fraction(Fraction &a, Fraction &b, Fraction &c){
	c.tu = a.tu * b.mau + a.mau * b.tu;
	c.mau = a.mau * b.mau;
}

void product_fraction(Fraction &a, Fraction &b, Fraction &c, Fraction &d){
	d.tu = a.tu * b.tu * c.tu;
	d.mau = a.mau * b.mau * c.mau;
}

void reduce_fraction(Fraction &a){
	ll tmp = __gcd(a.tu, a.mau);
	a.tu /= tmp;
	a.mau /= tmp;
}

void read_input(Fraction &a){
	cin >> a.tu >> a.mau;
}

void process(Fraction &a, Fraction &b){
	Fraction c;
	Fraction d;
	sum_fraction(a, b, c);
	reduce_fraction(c);
	c.tu *= c.tu;
	c.mau *= c.mau;
	product_fraction(a, b, c, d);
	reduce_fraction(d);
	cout << c.tu << "/" << c.mau << " " << d.tu << "/" << d.mau << endl;
	// Biden
}

int T;

int main(){
	int T;
	cin >> T;
	while(T--){
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
	return 0;
}
