#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		char c; cin >> c;
		if(islower(c)) cout << char(toupper(c));
		else cout << char(tolower(c));
		cout << endl;
	}
	// Biden
	return 0;
}
