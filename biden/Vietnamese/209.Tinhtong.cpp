#include <bits/stdc++.h>
#include <fstream>
using namespace std;
typedef long long ll;

int int_convert(string s){
	if(s.size() > 9) return 0;
	ll res = 0;
	for(int i = 0; i < s.size(); i++){
		int digit = s[i] - '0';
		if(digit < 0 or digit > 9){
			return 0;
		}
		res = res * 10 + digit;
	}
	if(res > INT_MAX) return 0;
	return (int) res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	ll sum = 0;
	ifstream input ("DATA.in");
	while(input >> s){
		sum += int_convert(s);
	}
	cout << sum;
	// Biden
	return 0;
}
