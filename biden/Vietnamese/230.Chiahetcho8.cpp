#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ed "\n"
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

int div(string s, int k){
	int cnt = 0;
	for(int i = 0; i < s.size(); i++){
		int sum = 0;
		for(int j = i; j < s.size(); j++){
			sum = (sum * 10 + s[j] - '0') % k;
			if(sum == 0) cnt++;
		}
	}
	return cnt;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << div(s, 8) - div(s, 24) << ed;
	}
	return 0;
}

