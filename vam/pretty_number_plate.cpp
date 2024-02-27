#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int check1(str a){
	for(int i=0; i<4; i++){
		if(a[i] <= a[i+1]) return 0;
	}return 1;
}

int check2(str a){
	for(int i=0; i<4; i++){
		if(a[i] != a[i+1]) return 0;
	}return 1;
}

int check3(str a){
	if(a[0]==a[1] && a[3]==a[2] && a[3]==a[4]) return 1;
	return 0;
}

int check4(str a){
	for(int i=0; i<5; i++){
		if(!(a[i]=='6' || a[i]=='8')) return 0;
	}return 1;
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		str a, r; cin >> a;
		int n = a.size();
		for(int i=n-1; i>=n-6; i--){
			if(a[i] >= '0' && a[i] <= '9'){
				r += a[i];
			}
		}if(check1(r) || check2(r) || check3(r) || check4(r)) cout << "YES\n";
		else cout << "NO\n";
	}
}