#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	cin >> s;
	int a = 0, b = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'B'){
			if(a >= b) a = b + 1;
			else a++;
		} else {
			if(b >= a) b = a + 1;
			else b++;
		}
	}
	cout << a;
	// Biden
	return 0;
}

