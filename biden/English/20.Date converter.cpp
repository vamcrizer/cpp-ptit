#include <bits/stdc++.h>
using namespace std;

void dateConverter(int n){
	int year = n / 365; n -= year * 365;
	int week = n / 7; n -= week * 7;
	cout << year << " " << week << " " << n;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	dateConverter(n);
	// Biden	
	return 0;
}
