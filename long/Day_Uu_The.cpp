// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int check(int a[], int n){
	int c = 0, l = 0;
	for(int i=0; i<n; i++){
		if(a[i]%2==0) ++c;
		else ++l;
	}if(c > l && n%2==0) return 1;
	if(l > c && n%2==1) return 1;
	return 0;
}

int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		char kitu = ' ';
		int a[222], stt = 0;
		while(kitu == ' '){
			cin >> a[stt++];
			kitu = getchar();
		}if(check(a, stt)==1) cout << "YES\n";
		else cout << "NO\n";
	}
}