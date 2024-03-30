#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int convert(char c){
	c = tolower(c);
	switch(c){
		case 'a':
		case 'b':
		case 'c':
			return 2;
		case 'd':
		case 'e':
		case 'f':
			return 3;
		case 'g':
		case 'h':
		case 'i':
			return 4;
		case 'j':
		case 'k':
		case 'l':
			return 5;
		case 'm':
		case 'n':
		case 'o':
			return 6;
		case 'p':
		case 'q':
		case 'r':
		case 's':
			return 7;
		case 't':
		case 'u':
		case 'v':
			return 8;
		case 'w':
		case 'x':
		case 'y':
		case 'z':
			return 9;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size(), flag = 1;
		for(int i = 0, j = n - 1; i <= n / 2; i++, j--){
			if(convert(s[i]) != convert(s[j])){
				flag = 0;
				break;
			}
		}
		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	// Biden
	return 0;
}
