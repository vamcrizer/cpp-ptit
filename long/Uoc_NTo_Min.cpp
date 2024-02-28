// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int a[10005];
void sang(){
	for(int i=1; i<=10005; i++) a[i] = i;
	for(int i=2; i<=100; i++){
		for(int j=i*i; j<=10000; j+=i){
			if(a[j] == j) a[j] = i;
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
		for(int i=1; i<=n; i++){
			cout << a[i] << ' ';
		}cout << endl;
	}
}