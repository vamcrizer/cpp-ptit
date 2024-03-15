#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int digitSum(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	if(sum < 10) return sum;
	return digitSum(sum);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int sum = 0;
		for(int i = 0; i < s.size(); i++){
			sum += (int) s[i] - '0';
		}
		if(digitSum(sum) == 9) cout << 1 << endl;
		else cout << 0 << endl;
	}
	// Biden
	return 0;
}

