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

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	cin >> s;
	int cnt = 0, flip = 0;
	for(int i = 0; i < s.size(); i++){
		if((s[i] == 'A' && flip % 2 == 0) || (s[i] == 'B' && flip % 2 == 1)) continue;
        flip++; cnt++;
	}
	if(s[s.size() - 1] == 'B') cnt++;
	else cnt--;
	cout << cnt;
	return 0;
}

