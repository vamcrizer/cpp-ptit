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

// idea 1: tim so sqrt(kp + 1) - 1 thuoc [0,b - 1]

// idea 2: neu x % p = 1 thi x^2 % p = 1
// voi moi x tim duoc => tim cac so co dang x + k*p thuoc [1,b] => tim K = [0, max K]

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int b, p;
		cin >> b >> p;
		ll cnt = 0;
		for(int i = 1; i <= p; i++){
			if(1ll * i * i % p == 1){
				ll maxx = i + b / p * p;
				maxx = (maxx > b) ? maxx - p : maxx;
				cnt += (maxx - i) / p + 1;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
