#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
//int a[1000005], b[1000005];
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int a[1000005] = {0}, b[1000005] = {0};
		int n, m; cin >> n >> m;
		int mark[123456] = {0}, dem[123456] = {0};
		int r[n+m], stt = 0;
		for(int i=1; i<=n; i++){
			cin >> a[i];
			mark[a[i]] = 1;
			++dem[a[i]];
		}
		for(int i=1; i<=m; i++){
			cin >> b[i];
			if(mark[b[i]]==1){
				mark[b[i]] = 2;
				r[stt++] = b[i];
			}
		}
		for(int i=0; i<stt; i++){
			for(int j=1; j<=dem[r[i]]; j++){
				cout << r[i] << ' ';
			}
		}int s[n+m], cnt = 0;
		for(int i=1; i<=n; i++){
			if(mark[a[i]]==1) s[cnt++] = a[i];
		}sort(s, s+cnt);
		for(int i=0; i<cnt; i++){
			cout << s[i] << ' ';
		}cout << endl;
	}
}