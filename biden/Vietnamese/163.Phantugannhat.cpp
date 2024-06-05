#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[1000001];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, k, x;
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i];
		cin >> k >> x;
		int pos = lower_bound(a + 1, a + n + 1, x) - a;
		int l = k / 2;
		for(int i = pos - l; i < pos; i++) cout << a[i] << " "; 
		if(a[pos] == x) pos++;
		for(int i = pos; i < pos + l; i++) cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
