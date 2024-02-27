#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int res = 0;
		for(int i=9; i>=0; i--){
			res += n/a[i];
			n %= a[i];
		}cout << res << endl;
	}
}