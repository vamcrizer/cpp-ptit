#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void swap_str(string &s1, string &s2){
	while(s1.size() > s2.size()) s2.insert(0, "0");
	while(s1.size() < s2.size()) s1.insert(0, "0");
	if(s1 < s2) swap(s1, s2);
}

void dif_bigint(string s1, string s2){
	int temp = 0;
	for(int i = s1.size() - 1; i >= 0; i--){
		int dif = (int) (s1[i] - '0') - (s2[i] - '0') - temp;
		if(dif < 0){
			temp = 1;
			dif += 10;
		} else temp = 0;
		s1[i] = (char) '0' + dif;
	}
	cout << s1 << endl;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		swap_str(s1, s2);
		dif_bigint(s1, s2);
	}
	// Biden
	return 0;
}

