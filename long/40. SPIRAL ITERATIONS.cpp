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
		int n, m, k; cin >> n >> m >> k;
		int a[n+5][m+5];
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				cin >> a[i][j];
			}
		}int h1=1, h2=n, c1=1, c2=m, dk = 0;
		while(h1<=h2 && c1<=c2){
			for(int i=c1; i<=c2; i++){
				--k;
				if(k==0){
					cout << a[h1][i];
					dk = 1; break;
				}
			}if(dk) break;
			++h1;
			for(int i=h1; i<=h2; i++){
				--k;
				if(k==0){
					cout << a[i][c2];
					dk = 1; break;
				}
			}if(dk) break;
			--c2;
			if(h1<=h2 && c1<=c2){
				for(int i=c2; i>=c1; i--){
					--k;
					if(k==0){
						cout << a[h2][i];
						dk = 1; break;
					}
				}if(dk) break;
				--h2;
				for(int i=h2; i>=h1; i--){
					--k;
					if(k==0){
						cout << a[i][c1];
						dk = 1; break;
					}
				}if(dk) break;
				++c1;
			}
		}cout << endl;
	}
}