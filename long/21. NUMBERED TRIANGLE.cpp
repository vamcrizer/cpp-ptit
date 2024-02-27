#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	
	int n; cin >> n;
	for(int i=1; i<=n; i++){
		int x=1;
		for(int j=1; j<=2*i-1; j++){
			cout << x;
			++x;
		}cout << endl;
	}
}