#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s, word, s1;
	getline(cin, s);
	cin >> s1;
	stringstream ss(s);
	while(ss >> word){
		if(word != s1) cout << word << " ";
	}
	// Biden
	return 0;
}

