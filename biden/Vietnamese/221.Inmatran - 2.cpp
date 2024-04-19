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

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n * 4 + 1][n * 4 + 1], b[n * 4 + 1][n * 4 + 1];
		vector<int> d1;
		vector<int> d2;
		for(int i = 1, i1 = n * 4; i <= n * 4; i++, i1--){
			for(int j = 1, j1 = n * 4; j <= n * 4; j++, j1--){
				a[i][j] = (i - 1) * n * 4 + j;
				b[i1][j1] = a[i][j];
			}
		}
		int cnt = 1;
		int rbegin = 1, rend = n * 4, cbegin = 1, cend = n * 4;
		while(cnt < n * 4 * n * 2){
			for(int i = rbegin; i < rend; i++){
				d1.push_back(a[i][cbegin]);
				cnt++;
			}
			for(int i = cbegin; i < cend; i++){
				d1.push_back(a[rend][i]);
				cnt++;
			}
			for(int i = rend - 1; i > rbegin; i--){
				d1.push_back(a[i][cend - 1]);
				cnt++;
			}
			if(cnt < n * 4 * n * 2){
				for(int i = cend - 2; i > cbegin + 1; i--){
					d1.push_back(a[rbegin + 1][i]);
					cnt++;
				}
				cbegin += 2;
			}
			cend -= 2;
			rend -= 2;
			rbegin += 2;
		}
		cnt = 1;
		rbegin = 1, rend = n * 4, cbegin = 1, cend = n * 4;
		while(cnt < n * 4 * n * 2){
			for(int i = rbegin; i < rend; i++){
				d2.push_back(b[i][cbegin]);
				cnt++;
			}
			for(int i = cbegin; i < cend; i++){
				d2.push_back(b[rend][i]);
				cnt++;
			}
			for(int i = rend - 1; i > rbegin; i--){
				d2.push_back(b[i][cend - 1]);
				cnt++;
			}
			if(cnt < n * 4 * n * 2){
				for(int i = cend - 2; i > cbegin + 1; i--){
					d2.push_back(b[rbegin + 1][i]);
					cnt++;
				}
				cbegin += 2;
			}
			cend -= 2;
			rend -= 2;
			rbegin += 2;
		}
		for(int i = d2.size() - 1; i >= 0; i--) cout << d2[i] << " ";
		cout << endl;
		for(int i = d1.size() - 1; i >= 0; i--) cout << d1[i] << " ";
		cout << endl;
	}
	return 0;
}

