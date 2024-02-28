// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int n, r[100];
void in(){
	for(int i=1; i<=n; i++){
		cout << r[i];
	}cout << ' ';
}

void solve(int i){
	for(int j=0; j<=1; j++){
		r[i] = j;
		if(i==n) in();
		else solve(i+1);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		cin >> n;
		solve(1);
		cout << endl;
	}
}