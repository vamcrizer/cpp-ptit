// LonggVu.
#include<bits/stdc++.h>
using namespace std;
// it's AC time! <3
#define LonggVu() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fi first
#define se second
#define pb push_back
using ll = long long int;
using ld = long double;
using str = string;

int n;
char a[22][22];

int check(int c){
	for(int i=1; i<=n-c+1; i++){
		for(int j=1; j<=n-c+1; j++){
			int h1 = i, h2 = i + c - 1, c1 = j, c2 = j + c - 1;
			int ok = 1;
			while(c1 == j){
				for(int x=c1; x<=c2; x++){
					if(a[h1][x] == 'O'){
						ok = 0; break;
					}
				}if(!ok) break;
				++h1;
				for(int x=h1; x<=h2; x++){
					if(a[x][c2] == 'O'){
						ok = 0; break;
					}
				}if(!ok) break;
				--c2;
				for(int x=c2; x>=c1; x--){
					if(a[h2][x] == 'O'){
						ok = 0; break;
					}
				}if(!ok) break;
				--h2;
				for(int x=h2; x>=h1; x--){
					if(a[x][c1] == 'O'){
						ok = 0; break;
					}
				}if(!ok) break;
				++c1;
			}if(ok) return 1;
		}
	}return 0;
}

void nhap(){
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> a[i][j];
		}
	}
}

void solve(){
	int ok = 0;
	for(int i=n; i>=1; i--){
		if(check(i)){
			cout << i << endl;
			ok = 1; break;
		}
	}if(!ok) cout << "0\n";
}

int main(){
	LonggVu();

	int t; cin >> t;
	while(t--){
		nhap();
		solve();
	}
}