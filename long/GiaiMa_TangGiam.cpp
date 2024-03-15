// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(str a, int n){
	stack<int> st;
	str res = "";
	for(int i=0; i<=n; i++){
		st.push(i+1);
		if(i==n || a[i]=='I'){
			while(!st.empty()){
				res += to_string(st.top());
				st.pop();
			}
		}
	}cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		str a; cin >> a;
		solve(a, a.size());
	}
}