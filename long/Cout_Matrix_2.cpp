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

void solve(int a[][44], int n){
	int h1 = n/2 - 1, h2 = h1 + 2, c1 = n/2, c2 = c1 + 2, x = 2;
	while(1){
		for(int i=h2; i>=h1; i--){
			cout << a[i][c1] << ' ';
		}++c1;
		for(int i=c1; i<=c2; i++){
			cout << a[h1][i] << ' ';
		}++h1;
		if(h2 + x <= n){
			h2 += x;
		}else h2 = n;
		x = 3;
		if(c1 - x >= 1){
			c1 -= x;
		}else c1 = 1;
		for(int i=h1; i<=h2; i++){
			cout << a[i][c2] << ' ';
		}if(a[h2][c2] == a[n][n]) break;
		--c2;
		for(int i=c2; i>=c1; i--){
			cout << a[h2][i] << ' ';
		}--h2;
		if(h1 - x >= 1){
			h1 -= x;
		}else h1 = 1;
		if(c2 + x <= n){
			c2 += x;
		}else c2 = n;
	}cout << endl;
	h1 = n/2, h2 = h1 + 2, c1 = n/2 - 1, c2 = c1 + 2, x = 2;
	while(1){
		for(int i=h1; i<=h2; i++){
			cout << a[i][c2] << ' ';
		}--c2;
		for(int i=c2; i>=c1; i--){
			cout << a[h2][i] << ' ';
		}--h2;
		if(h1 - x >= 1){
			h1 -= x;
		}else h1 = 1;
		x = 3;
		if(c2 + x <= n){
			c2 += x;
		}else c2 = n;
		for(int i=h2; i>=h1; i--){
			cout << a[i][c1] << ' ';
		}if(a[h1][c1] == a[1][1]) break;
		++c1;
		for(int i=c1; i<=c2; i++){
			cout << a[h1][i] << ' ';
		}++h1;
		if(c1 - x >= 1){
			c1 -= x;
		}else c1 = 1;
		if(h2 + x <= n){
			h2 += x;
		}else h2 = n;
	}cout << endl;
}

int main(){
	LonggVu();

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		n *= 4;
		int a[44][44], x = 1;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				a[i][j] = x;
				++x;
			}
		}solve(a, n);
	}
}