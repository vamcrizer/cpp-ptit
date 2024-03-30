#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

vector<int> b;

int main(){
	int n; cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			b.push_back(a[i][j]);
		}
	}
	sort(b.begin(), b.end());
	int k = 0;
	int col_start = 0, col_end = n - 1, row_start = 0, row_end = n - 1;
	while(k < n * n){
		for(int i = col_start; i <= col_end; i++){
			a[row_start][i] = b[k++];
		}
		for(int i = row_start + 1; i <= row_end; i++){
			a[i][col_end] = b[k++];
		}
		for(int i = col_end - 1; i >= col_start; i--){
			a[row_end][i] = b[k++];
		}
		for(int i = row_end - 1; i > row_start; i--){
			a[i][col_start] = b[k++];
		}
		col_start++, row_start++;
		col_end--, row_end--;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	b.clear();
	// Biden
	return 0;
}
