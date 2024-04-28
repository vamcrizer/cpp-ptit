#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

vector<int> v;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int m, n, k;
		cin >> m >> n >> k;
		int a[m][n];
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		int col_start = 0, col_end = n - 1, row_start = 0, row_end = m - 1;
		while(v.size() < m * n){
			for(int i = col_start; i <= col_end; i++){
				v.push_back(a[row_start][i]);
			}
			for(int i = row_start + 1; i <= row_end; i++){
				v.push_back(a[i][col_end]);
			}
			for(int i = col_end - 1; i >= col_start; i--){
				v.push_back(a[row_end][i]);
			}
			for(int i = row_end - 1; i > row_start; i--){
				v.push_back(a[i][col_start]);
			}
			col_start++, row_start++;
			col_end--, row_end--;
		}
		cout << v[k - 1] << endl;
		v.clear();
	}
	// Biden
	return 0;
}
