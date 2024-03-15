#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

int spiral_traversal(int a[105][105], int n, int m, int k){
	int col_start = 0, col_end = m - 1, row_start = 0, row_end = n - 1;
	int cnt = 0;
	vector<int> v;
	while(cnt < m * n){
		for(int i = col_start; i <= col_end; i++){
			v.push_back(a[row_start][i]);
			cnt++;
		}
		row_start++;
		
		for(int i = row_start; i <= row_end; i++){
			v.push_back(a[i][col_end]);
			cnt++;
		}
		col_end--;
		
		for(int i = col_end; i >= col_start; i--){
			v.push_back(a[row_end][i]);
			cnt++;
		}
		row_end--;
		
		for(int i = row_end; i >= row_start; i--){
			v.push_back(a[i][col_start]);
			cnt++;
		}
		col_start++;
	}
	return v[k - 1];
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		int a[105][105];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		cout << spiral_traversal(a, n, m, k) << endl;
	}
	// Biden
	return 0;
}

