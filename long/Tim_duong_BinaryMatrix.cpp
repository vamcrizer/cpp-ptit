// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int n, m, x, y, z, t;
int a[1005][1005], r[1005][1005]; //r[i][j] = so buoc di tu o bd -> (i, j)
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

void bfs(int i, int j){
	queue<pair<int, int>> q;
	q.push({i, j});
	a[i][j] = 0; r[i][j] = 0;
	while(!q.empty()){
		pair<int, int> top = q.front(); q.pop();
		for(int k=0; k<4; k++){
			int i1 = top.first + dx[k];
			int j1 = top.second + dy[k];
			if(a[i1][j1] == 1 && i1 >= 0 && i1 < n && j1 >= 0 && j1 < m){
				r[i1][j1] = r[top.first][top.second] + 1;
				if(i1 == z && j1 == t) return;
				q.push({i1, j1});
				a[i1][j1] = 0;
			}
		}
	}
}

void solve(){
	cin >> n >> m >> x >> y >> z >> t;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}if(a[x][y] && a[z][t]){
		bfs(x, y);
		if(r[z][t]){
			cout << r[z][t];
		}else cout << -1;
	}else cout << -1;
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--){
		solve();
	}
}