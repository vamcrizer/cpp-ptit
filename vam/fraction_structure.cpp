#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

struct Fraction{
    ll tu, mau;
};

void input(struct Fraction &p){
    cin >> p.tu >> p.mau;
}

void simplify(struct Fraction &p){
    ll gcd = __gcd(p.tu, p.mau);
    p.tu /= gcd;
    p.mau /= gcd;
}

void print(struct Fraction p){
    cout << p.tu << "/" << p.mau;
}

int main() {
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}