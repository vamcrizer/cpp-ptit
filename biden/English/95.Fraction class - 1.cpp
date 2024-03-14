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

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	Fraction a(69, 420);
	cin >> a;
	thaidui(a);
	cout << a;
	// Biden
	return 0;
}
