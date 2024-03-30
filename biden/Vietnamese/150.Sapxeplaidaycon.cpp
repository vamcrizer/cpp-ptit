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
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v;
		vector<int> v_check;
		for(int i = 0; i < n; i++){
			int a; cin >> a;
			v_check.push_back(a);
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		int l = 0, r = n - 1;
		while(v[l] == v_check[l]) l++;
		while(v[r] == v_check[r]) r--;
		cout << l + 1 << " " << r + 1 << endl;
	}
	return 0;
}
