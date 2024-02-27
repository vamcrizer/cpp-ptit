#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	
	ld a, b;
	char d;
	cin >> a >> d >> b;
	if(d=='+') cout << fixed << setprecision(2) << a+b;
	else if(d=='-') cout << fixed << setprecision(2) << a-b;
	else if(d=='*') cout << fixed << setprecision(2) << a*b;
	else cout << fixed << setprecision(2) << a/b;
}