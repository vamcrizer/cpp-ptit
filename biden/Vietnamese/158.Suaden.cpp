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
	int n, k, b;
	cin >> n >> k >> b;
	int a[100001] = {0};
	for(int i = 0; i < b; i++){
		int x; cin >> x;
		a[x]++;
	}
	int res, cnt = 0;
	for(int i = 1; i <= k; i++){
		if(a[i]) cnt++;
	}
	res = cnt;
	for(int i = 1; i <= n - k; i++){
		cnt -= a[i];
		cnt += a[i + k];
		res = min(res, cnt);
	}
	cout << res << endl;
	return 0;
}

// 1 2 3 4 5 6 7 8 9 10
// 1 1 0 0 1 0 0 0 1 1
// Sliding window:
// cnt sau khi truot = cnt - dau + cuoi
// |1 1 0 0 1 0| 0 0 1 1
//  |
//  |
// \|/
// 1 |1 0 0 1 0 0| 0 1 1 etc.
