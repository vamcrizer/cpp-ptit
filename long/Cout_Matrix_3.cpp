// LonggVu.
#include<bits/stdc++.h>
using namespace std;
// it's AC time! <3
#define LonggVu() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fi first
#define se second
#define pb push_back
using ll = long long int;
using ld = long double;
using str = string;

int n, m, a[105][105], mark[105][105], ok;
int dx[] = {1, -1};
int dy[] = {-1, 1};

void run(int i, int j){
	mark[i][j] = 1;
	cout << a[i][j] << ' ';
	if(i==n && j==m){
		ok = 1; return;
	}
	for(int k=0; k<2; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && !mark[i1][j1]){
			run(i1, j1);
			if(ok) return;
		}
	}if(i==1 && j==1) run(1, 2);
	else if((j==1 || j==m) && i < n) run(i+1, j);
	else if((i==1 || i==n) && j < m) run(i, j+1);
}

int main(){
	LonggVu();

	int t; cin >> t;
	while(t--){
		memset(mark, 0, sizeof(mark));
		ok = 0;
		cin >> n >> m;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				cin >> a[i][j];
			}
		}run(1, 1);
		cout << endl;
	}
}