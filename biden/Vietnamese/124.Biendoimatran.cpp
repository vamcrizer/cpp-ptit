#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n][n];
		int maximum = 0, sum = 0, temp;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
				sum += a[i][j];
			}
		}
		// Tim tong hang/cot lon nhat
		for(int i = 0; i < n; i++){
			temp = 0;
			for(int j = 0; j < n; j++){
				temp += a[i][j];
			}
			maximum = max(maximum, temp);
		}
		for(int i = 0; i < n; i++){
			temp = 0;
			for(int j = 0; j < n; j++){
				temp += a[j][i];
			}
			maximum = max(maximum, temp);
		}
		cout << maximum * n - sum << endl;
	}
	// Biden
	return 0;
}
