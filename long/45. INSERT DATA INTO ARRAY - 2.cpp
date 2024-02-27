#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	
	int t; cin >> t;
	for(int z=1; z<=t; z++){
		int n, m, k; cin >> n >> m >> k;
		int a[n+5], b[m+5];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
		}cout << "Test " << z << ':' << endl;
		for(int i=0; i<n; i++){
			if(i==k){
				for(int j=0; j<m; j++){
					cout << b[j] << ' ';
				}
			}cout << a[i] << ' ';
		}if(k==n){
			for(int i=0; i<m; i++){
				cout << b[i] << ' ';
			}
		}cout << endl;
	}
}