#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	double a, b;
	char c;
	cin >> a;
	cin.ignore();
	cin >> c;
	cin.ignore();
	cin >> b;
	cout << fixed << setprecision(2);
	switch(c){
		case '+':
			cout << a + b;
			break;
		case '-':
			cout << a - b;
			break;
		case '/':
			cout << a / b;
			break;
		case '*':
			cout << a * b;
			break;
	}
	// Biden
	return 0;
}
