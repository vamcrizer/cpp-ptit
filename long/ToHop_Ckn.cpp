// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int n, k, r[100], mark[100];
void in(){
	for(int i=1; i<=k; i++){
		cout << r[i];
	}cout << ' ';
}

void solve(int i){
	for(int j=r[i-1]+1; j<=n-k+i; j++){
		if(!mark[j]){
			mark[j] = 1;
			r[i] = j;
			if(i==k) in();
			else solve(i+1);
			mark[j] = 0;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		solve(1);
		cout << endl;
	}
}