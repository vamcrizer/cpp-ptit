#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, m, pos = 0;
		cin >> n >> m;
		int a[n][m], row[n * m], col[n * m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j]){
					row[pos] = i;
					col[pos] = j;
					pos++;
				}
			}
		}
		for(int i = 0; i < pos; i++){
			for(int j = 0; j < m; j++){
				a[row[i]][j] = 1;
			}
			for(int k = 0; k < n; k++){
				a[k][col[i]] = 1;
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}		
	}
	// Biden
	return 0;
}

