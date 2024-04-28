#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int a[14567];
void sang(){
	for(int i=2; i<=120; i++){
		if(!a[i]){
			for(int j=i*i; j<=14400; j+=i) a[j] = 1;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	sang();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=2; i<=n; i++){
			if(!a[i]) cout << i << ' ';
		}cout << endl;
	}
}