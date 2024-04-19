#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int x_4axis[] = {-1, 0, 0, 1};
int y_4axis[] = {0, -1, 1, 0};
int x_8axis[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y_8axis[] = {-1, 0, 1, -1, 1, -1, 0, 1};

// |---------------------------------\   B
// \ i-1 , j-1 | i-1 , j | i+1 , j+1 |   I
// |---------------------------------\   D
// \  i  , j-1 |  i  , j |  i  , j+1 |   E
// |---------------------------------\   N
// \ i+1 , j-1 | i+1 , j | i+1 , j+1 |   J
// |---------------------------------\   R
//                                       .

int n, m;
char a[105][105];

void input(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin >> a[i][j];
}

void Try(int i, int j){
	a[i][j] = 'J';
	for(int k = 0; k < 4; k++){
		int i1 = i + x_4axis[k];
		int j1 = j + y_4axis[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 'O'){
			Try(i1, j1);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		input();
		for(int i = 1; i <= n; i++){
			if(a[i][1] == 'O') Try(i, 1);
			if(a[i][m] == 'O') Try(i, m);
		}
		for(int i = 1; i <= m; i++){
			if(a[1][i] == 'O') Try(1, i);
			if(a[n][i] == 'O') Try(n, i);			
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(a[i][j] != 'J') cout << "X ";
				else cout << "O ";
			}
			cout << endl;
		}
	}
	return 0;
}

