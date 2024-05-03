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
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> a[i][j];
		for(int i = 0; i < n + m - 1; i++){
			if(i % 2 == 0){
				for(int k = 0, j = i; k < m; k++, j--){
					if(j >= 0 && j < n && k >= 0 && k < m) cout << a[j][k] << " ";
				}
			} else {
				for(int k = 0, j = i; k < n; k++, j--){
					if(j >= 0 && j < m && k >= 0 && k < n) cout << a[k][j] << " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}

