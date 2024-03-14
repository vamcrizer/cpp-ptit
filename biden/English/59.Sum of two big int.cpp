#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void sum_bigint(string s1, string s2){
	s1.insert(0, "0"); s2.insert(0, "0");
	while(s1.size() > s2.size()) s2.insert(0, "0");
	while(s1.size() < s2.size()) s1.insert(0, "0");
	int temp = 0;
	for(int i = s1.size() - 1; i >= 0; i--){
		int sum = (int) s1[i] - '0' + s2[i] - '0' + temp;
		temp = sum / 10;
		s1[i] = (char) '0' + sum % 10;
	}
	if(s1[0] == '0') s1.erase(s1.begin());
	cout << s1 << endl;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		sum_bigint(s1, s2);
	}
	// Biden
	return 0;
}

