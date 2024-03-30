#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

ll lcm(ll a, ll b){
    return a / __gcd(a, b) * b;
}

struct PhanSo{
    ll tu, mau;
};

void rutgon(PhanSo &p) {
    ll gcd = __gcd(p.tu, p.mau);
    p.tu /= gcd;
    p.mau /= gcd;
}

void process(PhanSo A, PhanSo B){
    //(A + B)
    ll mau_chung = lcm(A.mau, B.mau);
    PhanSo C;
    C.tu = (A.tu * mau_chung / A.mau) + (B.tu * mau_chung / B.mau);
    C.mau = mau_chung;
    rutgon(C);
    // (A + B)^2
    C.tu *= C.tu;
    C.mau *= C.mau;
    rutgon(C);
    // A x B x C
    PhanSo D;
    D.tu = A.tu * B.tu * C.tu;
    D.mau = A.mau * B.mau * C.mau;
    rutgon(D);
    if (C.mau < 0){
        C.mau = abs(C.mau);
        C.tu = C.tu - 2*C.tu;
    }
    if (D.mau < 0){
        D.mau = abs(D.mau);
        D.tu = D.tu - 2*D.tu;
    }
    cout << C.tu << "/" << C.mau << " " << D.tu << "/" << D.mau;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		rutgon(A);
		rutgon(B);
		process(A, B);
        cout << endl;
	}
}