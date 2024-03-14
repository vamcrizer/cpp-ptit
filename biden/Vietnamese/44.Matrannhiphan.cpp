#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int a[n][3];
	int one, cnt = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < 3; j++)
			cin >> a[i][j];
	for(int i = 0; i < n; i++){
		one = 0;
		for(int j = 0; j < 3; j++){
			if(a[i][j]) one++;
		}
		if(one > 1) cnt++;
	}
	cout << cnt;
	// Biden
	return 0;
}
