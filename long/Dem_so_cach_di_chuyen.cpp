// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int n, s, a[22][22], res, ans;
int dx[] = {1, 0};
int dy[] = {0, 1};

void count(int i, int j){
	res += a[i][j];
	if(i==n && j==n){
		if(res == s) ++ans;
	}
	for(int k=0; k<2; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 <= n && j1 <= n){
			count(i1, j1);
		}
	}res -= a[i][j];
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		cin >> n >> s;
		//memset(mark, 0, sizeof(mark));
		res = 0, ans = 0;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				cin >> a[i][j];
			}
		}count(1, 1);
		cout << ans << endl;
	}
}