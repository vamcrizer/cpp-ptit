#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
        int n, m;
        cin >> n >> m;
        int a[n + 5][m + 5];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        int row1 = 0, col1 = 0, row2 = n - 1, col2 = m - 1;
        while(row1 < row2 && col1 < col2){
            int pre = a[row1 + 1][col1];
            for (int i = col1; i <= col2; i++) {
                int cur = a[row1][i];
                a[row1][i] = pre;
                pre = cur;
            }
            row1++;
            for (int i = row1; i <= row2; i++) {
                int cur = a[i][col2];
                a[i][col2] = pre;
                pre = cur;
            }
            col2--;
            if (row1 <= row2) {
                for (int i = col2; i >= col1; i--) {
                    int cur =  a[row2][i];
                    a[row2][i] = pre;
                    pre = cur;
                }
                row2--;
            }
            if (col1 <= col2) {
                for (int i = row2; i >= row1; i--) {
                    int cur = a[i][col1];
                    a[i][col1] = pre;
                    pre = cur;
                }
                col1++;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << ' ';
            }
        }
        cout << endl;
	}
	// Biden
	return 0;
}

