#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		string a; cin >> a;
		int k; cin >> k;
		int mark[300] = {0}, n = a.size();
		for(int i=0; i<n; i++){
			mark[a[i]] = 1;
		}int res = 0;
		for(int i=97; i<=122; i++){
			if(mark[i]==0) ++res;
		}if(res<=k) cout << 1 << endl;
		else cout << 0 << endl;
	}
}