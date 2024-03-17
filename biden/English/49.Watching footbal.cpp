#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int a[n + 2], time = 0;
	for(int i = 1; i <= n; i++) cin >> a[i];
	a[0] = 0; a[n + 1] = 90;
	for(int i = 1; i <= n + 1; i++){
		if(a[i] - a[i - 1] <= 15) time = a[i];
		else {
			time += 15;
			break;
		}
	}
	if(time > 90) time = 90;
	cout << time;
	// Biden
	return 0;
}

