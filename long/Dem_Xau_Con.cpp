// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int check(str a, int n, int k){
	set<char> s;
	for(int i=0; i<n; i++){
		s.insert(a[i]);
	}return s.size() == k;
}

void solve(str a, int n, int k){
	int res = 0;
	for(int i=0; i<n; i++){
		str tmp = "";
		set<char> s;
		for(int j=i; j<n; j++){
			tmp += a[j];
			s.insert(a[j]);
			if(s.size() == k){
				++res;
				//cout << tmp << endl;
			}else if(s.size() > k) break;
		}s.clear();
	}cout << res << endl;
}

int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		str a; cin >> a;
		int k; cin >> k;
		solve(a, a.size(), k);
	}
}