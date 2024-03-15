// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(str a, int n){
	int res = 0, ok = 1, cnt = 0;
	for(int i=n-1; i>=0; i--){
		if(ok){
			if(a[i] == 'B'){
				++cnt;
			}else{
				if(cnt == 1){
					++res;
				}else if(cnt > 1){
					++res;
					ok = 0;
					++i;
				}cnt = 0;
			}
		}else{
			if(a[i] == 'A'){
				++cnt;
			}else{
				if(cnt == 1){
					++res;
				}else if(cnt > 1){
					++res;
					ok = 1;
					++i;
				}cnt = 0;
			}
		}
	}if(cnt) ++res;
	cout << res;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	str a; cin >> a;
	solve(a, a.size());
}