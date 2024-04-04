#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int x_4axis[] = {-1, 0, 0, 1};
int y_4axis[] = {0, -1, 1, 0};
int x_8axis[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y_8axis[] = {-1, 0, 1, -1, 1, -1, 0, 1};

// |---------------------------------\   B
// \ i-1 , j-1 | i-1 , j | i+1 , j+1 |   I
// |---------------------------------\   D
// \  i  , j-1 |  i  , j |  i  , j+1 |   E
// |---------------------------------\   N
// \ i+1 , j-1 | i+1 , j | i+1 , j+1 |   J
// |---------------------------------\   R
//                                       .

string mul_bigint(string s1, char s2){
	s1.insert(0, "0");
	int tmp = 0, nho = 0;
	for(int i = s1.size() - 1; i >= 0; i--){
		tmp = (s1[i] - '0') * (s2 - '0') + nho;
		nho = tmp / 10;
		tmp %= 10;
		s1[i] = (char) tmp + '0';
	}
	if(s1[0] == '0') s1.erase(s1.begin());
	return s1;
}

string sum_bigint(string s1, string s2){
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
	return s1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s1, s2, tmp, ans = "";
		int first = 1;
		cin >> s1 >> s2;
		if(s2.size() > s1.size()) swap(s1, s2);
		for(int i = s2.size() - 1, j = 0; i >= 0; i--, j++){
			tmp = mul_bigint(s1, s2[i]);
			for(int k = 0; k < j; k++) tmp += '0';
			if(first){
				first = 0;
				ans = tmp;
			} else {
				ans = sum_bigint(ans, tmp);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
