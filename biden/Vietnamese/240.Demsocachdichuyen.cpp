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

int a[25][25], visited[25][25];
int n, k, cnt, sum;

void Try(int i, int j){
	if(sum > k) return;
	if(i == n && j == n && sum == k){
		cnt++;
	}
	if(i + 1 <= n && visited[i + 1][j] == 0){
		sum += a[i + 1][j];
		visited[i + 1][j] = 1;
		Try(i + 1, j);
		visited[i + 1][j] = 0;
		sum -= a[i + 1][j];
	}
	if(j + 1 <= n && visited[i][j + 1] == 0){
		sum += a[i][j + 1];
		visited[i + 1][j] = 1;
		Try(i, j + 1);
		visited[i + 1][j] = 0;
		sum -= a[i][j + 1];
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		memset(visited, 0, sizeof(visited));
		cnt = 0;
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				cin >> a[i][j];
		visited[1][1] = 1;
		sum = a[1][1];
		Try(1, 1);
		cout << cnt << endl;
	}
	return 0;
}
