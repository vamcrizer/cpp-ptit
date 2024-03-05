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

int main(){
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	// Biden
	return 0;
}
