#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
ll fb[100];
void solve(){
	fb[0] = 0, fb[1] = 1;
	for(int i=2; i<=70; i++){
		fb[i] = fb[i-1] + fb[i-2];
	}
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	solve();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5], r[n+5], stt = 0;
		for(int i=1; i<=n; i++){
			cin >> a[i];
			for(int j=0; j<=70; j++){
				if(a[i]==fb[j]){
					r[stt++] = a[i];
					break;
				}
			}
		}
		for(int i=0; i<stt; i++){
			cout << r[i] << ' ';
		}cout << endl;
	}
}