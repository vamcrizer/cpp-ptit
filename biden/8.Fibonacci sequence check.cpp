#include <bits/stdc++.h>
using namespace std;

int f[25];
int mark[10000];

void sievefibo(){
	memset(mark, 0, sizeof(mark));
	f[0] = 0; mark[0] = 1;
	f[1] = 1; mark[1] = 1;
	for(int i = 2; i <= 20; i++){
		f[i] = f[i - 1] + f[i - 2];
		mark[f[i]]++;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	sievefibo();
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++){
			if(mark[a[i]]) cout << a[i] << " ";
		}
		cout << endl;
	}
	// Biden
	return 0;
}
