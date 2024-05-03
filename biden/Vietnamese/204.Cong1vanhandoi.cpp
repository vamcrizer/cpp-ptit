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

// idea: tu 1 mang truy nguoc ve day 0 0 0

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		ll cnt = 0;
		int ok = 1;
		while(ok){
			// cong 1
			for(int i = 0; i < n; i++){
				if(a[i] % 2 == 1){
					a[i]--;
					cnt++;
				}
			}
			// nhan doi
			for(int i = 0; i < n; i++) a[i] /= 2;
			cnt++;
			// check full 0 -> break
			for(int i = 0; i < n; i++){
				if(a[i] != 0){
					ok = 1;
					break;
				} else ok = 0;
			}
		}
		cout << cnt - 1 << endl;
	}
	return 0;
}

