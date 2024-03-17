// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n, p; cin >> n >> p;
		int res = 0;
		for(int i=2; i<=n; i++){
			int tmp = i;
			while(tmp%p==0){
				++res;
				tmp /= p;
			}
		}cout << res << endl;
	}	
}