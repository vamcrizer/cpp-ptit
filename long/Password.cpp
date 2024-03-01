// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

str a[100005];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}ll res = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i != j){
				auto pos = a[i].find(a[j]);
				if(pos != string::npos) ++res;
			}
		}
	}cout << res;
}