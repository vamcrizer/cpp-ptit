// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int n, m, mark[22][22], dk, x, y;
char c[22][22];
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

void in(){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cout << c[i][j] << ' ';
		}cout << endl;
	}cout << endl;
}

void dfs(int i, int j){
	if(dk==2) c[i][j] = 'X';
	mark[i][j] = 1;
	for(int k=0; k<4; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(c[i1][j1] == 'O' && !mark[i1][j1] && ((i1 < n && j1 < m) && (i1 > 1 && j1 > 1))){
			dfs(i1, j1);
		}else if(c[i1][j1] == 'O' && !mark[i1][j1] && (i1 == 1 || j1 == 1 || i1 == n || j1 == m)){
			dk = 0; 
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		memset(mark, 0, sizeof(mark));
		cin >> n >> m;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				cin >> c[i][j];
			}
		}
		for(int i=2; i<n; i++){
			for(int j=2; j<m; j++){
				if(c[i][j] == 'O' && !mark[i][j]){
					dk = 1;
					dfs(i, j);
					if(dk==1){
						memset(mark, 0, sizeof(mark));
						dk = 2;
						dfs(i, j);
					}
				}
			}
		}in();
	}
}