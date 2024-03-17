#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Fraction{
    ll x, y;
};

void input(Fraction &Target){
	cin >> Target.x >> Target.y;
}

void simplify(Fraction &Target){
	ll div = __gcd(Target.x, Target.y);
	Target.x /= div;
	Target.y /= div;
}

void print(Fraction Target){
	cout << Target.x << "/" << Target.y;
}

int main(){
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	// Biden
	return 0;
}

