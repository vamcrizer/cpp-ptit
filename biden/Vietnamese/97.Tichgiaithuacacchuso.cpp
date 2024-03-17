#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string check(char a){
	int tmp = a - '0';
	switch(tmp){
		case 2:
			return "2";
		case 3:
			return "3";
		case 4: // 4! = 24 = 2! * 2! * 3!
			return "322";
		case 5:
			return "5";
		case 6: // 6! = 720 = 3! * 5!
			return "53";
		case 7:
			return "7";
		case 8: // 8! = 7! * 2! ^ 3
			return "7222";
		case 9: // 9! = 7! * 3! * 2! ^ 2
			return "7332";
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n;
		string a, res = "";
		cin >> n >> a;
		for(int i = 0; i < a.size(); i++){
			if(a[i] != '0' && a[i] != '1') res += check(a[i]);
		}
		sort(res.begin(), res.end(), greater<char>());
		cout << res << endl;
	}
	// Biden
	return 0;
}
