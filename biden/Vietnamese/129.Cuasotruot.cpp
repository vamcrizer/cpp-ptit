#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void sum_mat(int a[105][105], int b[15][15], int m, int p1, int p2){
	for(int i = p1; i < p1 + m; i++)
		for(int j = p2; j < p2 + m; j++)
			a[i][j] *= b[i - p1][j - p2];
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n;
	int a[105][105], b[15][15];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> a[i][j];
	cin >> m;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < m; j++)
			cin >> b[i][j];
	int tmp = n / m;
	for(int i = 0; i < n; i += m)
		for(int j = 0; j < n; j += m)
			sum_mat(a, b, m, i, j);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;	
	}
	// Biden
	return 0;
}
