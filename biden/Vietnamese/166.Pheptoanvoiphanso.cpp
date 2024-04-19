#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct PhanSo{
	ll tu, mau;
};

void sum_fraction(PhanSo &a, PhanSo &b, PhanSo &c){
	c.tu = a.tu * b.mau + a.mau * b.tu;
	c.mau = a.mau * b.mau;
}

void product_fraction(PhanSo &a, PhanSo &b, PhanSo &c, PhanSo &d){
	d.tu = a.tu * b.tu * c.tu;
	d.mau = a.mau * b.mau * c.mau;
}

void reduce_fraction(PhanSo &a){
	ll tmp = __gcd(a.tu, a.mau);
	a.tu /= tmp;
	a.mau /= tmp;
}

void read_input(PhanSo &a){
	cin >> a.tu >> a.mau;
}

void process(PhanSo &a, PhanSo &b){
	PhanSo c;
	PhanSo d;
	sum_fraction(a, b, c);
	reduce_fraction(c);
	c.tu *= c.tu;
	c.mau *= c.mau;
	product_fraction(a, b, c, d);
	reduce_fraction(d);
	cout << c.tu << "/" << c.mau << " " << d.tu << "/" << d.mau << endl;
	// Biden
}

int main(){
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
	return 0;
}
