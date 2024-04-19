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

// Y tuong: tim so nho nhat => tim phan du xem co bang nhau ko

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int mini = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) mini = max(mini, a[i]);
		int cnt = 0;
		for(int i = 1; i <= mini; i++){
			int cnt_tmp = 0;
			int tmp = a[0] % i;
			for(int j = 1; j < n; j++){
				if(a[j] % i != tmp) break;
				else cnt_tmp++;
			}
			if(cnt_tmp == n - 1) cnt++;
		}
		int double_check = 1;
		for(int i = 0; i < n - 1; i++){
			if(a[i] != a[i + 1]) double_check = 0;
		}
		if(double_check) cnt = 0;
		cout << cnt << endl;
	}
	return 0;
}
