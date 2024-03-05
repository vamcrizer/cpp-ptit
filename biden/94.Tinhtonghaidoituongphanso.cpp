#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class PhanSo{
	public:
		ll tu, mau;
		PhanSo(ll, ll);
		void rutgon();
		friend istream& operator >> (istream &in, PhanSo &a);
		friend ostream& operator << (ostream &out, PhanSo a);
		PhanSo operator+(PhanSo p);
};

PhanSo::PhanSo(ll tre, ll em){
	this->tu = tre;
	this->mau = em;
}

istream& operator >> (istream &in, PhanSo &a){
	cin >> a.tu >> a.mau;
	return in;
}

ostream& operator << (ostream &out, PhanSo a){
	cout << a.tu << "/" << a.mau;
	return out;
}

void PhanSo::rutgon(){
	ll tmp = __gcd(tu, mau);
	tu /= tmp;
	mau /= tmp;
}

PhanSo PhanSo::operator+(PhanSo p){
	PhanSo res(1,1);
	res.tu = tu * p.mau + mau * p.tu;
	res.mau = p.mau * mau;
	res.rutgon();
	return res;
}

int main(){
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	// Biden
	return 0;
}
