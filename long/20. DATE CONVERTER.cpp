#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	
	int n; cin >> n;
	int y = n/365;
	int w = (n%365)/7;
	int d = (n%365)%7;
	cout << y << ' ' << w << ' ' << d;
}