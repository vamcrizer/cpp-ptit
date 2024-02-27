#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5][n+5];
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				cin >> a[i][j];
			}
		}
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				if(i==1 || i==n){
					cout << a[i][j] << ' ';
				}else{
					if(j==1 || j==n){
						cout << a[i][j] << ' ';
					}else{
						cout << "  ";
					}
				}
			}cout << endl;
		}//cout << endl;
	}
}