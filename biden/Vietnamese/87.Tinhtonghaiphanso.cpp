#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct PhanSo{
	ll tu, mau;
};

void rutgon(PhanSo &a){
	ll tmp = __gcd(a.tu, a.mau);
	a.tu /= tmp;
	a.mau /= tmp;
}

void nhap(PhanSo &a){
	cin >> a.tu >> a.mau;
}

PhanSo tong(PhanSo &a, PhanSo &b){
	PhanSo c;
	c.tu = a.tu * b.mau + a.mau * b.tu;
	c.mau = a.mau * b.mau;
	rutgon(c);
	return c;
}

void in(PhanSo &a){
	cout << a.tu << "/" << a.mau << endl;
}

int main(){
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	// Biden
	return 0;
}
