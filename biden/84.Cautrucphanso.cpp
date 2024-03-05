#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct PhanSo{
    ll x, y;
};

void nhap(PhanSo &Target){
	cin >> Target.x >> Target.y;
}

void rutgon(PhanSo &Target){
	ll div = __gcd(Target.x, Target.y);
	Target.x /= div;
	Target.y /= div;
}

void in(PhanSo Target){
	cout << Target.x << "/" << Target.y;
}

int main(){
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	// Biden
	return 0;
}
