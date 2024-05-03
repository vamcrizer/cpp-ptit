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

void swap_row(int a[100][100], int x, int y, int rank) {
	for (int i = 0; i < rank; i++) swap(a[x][i], a[y][i]);
}

int test(int a[100][100], int m, int n) {
	int rank = n;
	bool ok;
	for(int i = 0; i < rank; i++) {
		if(a[i][i]){
			for(int j = 0; j < m; j++){
				if(i != j) {
					double x = 1.0 * a[j][i] / a[i][i];
					for(int l = 0; l < rank; l++){
						a[j][l] -= x * a[i][l];
					}
				}
			}
		} else {
			ok = true;
			for(int j = i + 1; j < m; j++){
				if (a[j][i]) {
					swap_row(a, j, i, rank);
					ok = false;
					break;
				}
			}
			if(ok){
				rank--;
				for (int j = 0; j < m; j++) {
					a[j][i] = a[j][rank];
				}
			}
			i--;
		}
	}
	return rank;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	int a[100][100];
	while(t--){
		int n, m;
		cin >> n >> m;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> a[i][j];
		cout << test(a, n, m) << endl;
	}
	return 0;
}

