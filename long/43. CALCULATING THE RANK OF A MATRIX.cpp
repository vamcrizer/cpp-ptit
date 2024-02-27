#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
void in(ld a[][22], int n, int m){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cout << a[i][j] << ' ';
		}cout << endl;
	}cout << endl;
}
int check(ld a[], int n){
	for(int i=1; i<=n; i++){
		if(a[i] != 0) return 1;
	}return 0;
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		ld a[n+5][22];
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				cin >> a[i][j];
			}
		}//chuyen cac hang co so 0 o dau xuong duoi
		for(int i=1; i<=n; i++){
			if(a[i][1] == 0){
				for(int j=i+1; j<=n; j++){
					if(a[j][1] != 0){
						for(int k=1; k<=m; k++){
							swap(a[i][k], a[j][k]);
						}break;
					}
				}
			}
		}//find the rank
		//cout << endl;
		for(int i=1; i<=n; i++){
			for(int j=i+1; j<=n; j++){
				if(check(a[j], m)==1){
					int stt = 1, tmp = a[i][stt]*a[j][stt];
					while(tmp==0){
						++stt;
						tmp = a[i][stt]*a[j][stt];
					}ld x = a[j][stt] / a[i][stt];
					for(int k=1; k<=m; k++){
						a[j][k] = a[j][k] - a[i][k]*x;
					}
				}
			}//in(a, n, m);
		}int res = 0;
		for(int i=1; i<=n; i++){
			int dk = 0;
			for(int j=1; j<=m; j++){
				if(a[i][j]!=0){
					dk = 1; break;
				}
			}res += dk;
		}cout << res << endl;
	}
}