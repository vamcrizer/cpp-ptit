#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m, p, pos = 0;
	cin >> n >> m >> p;
	int a[n + 1][m + 1], b[n + 1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
			if(j == p) b[pos++] = a[i][j];			
		}		
	}
	sort(b, b + pos);
	pos = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(j == p){
				cout << b[pos++] << " ";
			} else {
				cout << a[i][j] << " ";	
			}
		}
		cout << endl;
	}
	// Biden
	return 0;
}

