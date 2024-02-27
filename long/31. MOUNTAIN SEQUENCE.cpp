#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}int l, r; cin >> l >> r;
		int pos = max_element(a+l, a+r+1) - a;
		int dk = 1;
		for(int i=l; i<r; i++){
			if(i<pos){
				if(a[i] > a[i+1]){
					dk = 0; break;
				}
			}else{
				if(a[i] < a[i+1]){
					dk = 0; break;
				}
			}
		}if(dk==1) cout << "Yes\n";
		else cout << "No\n";
	}
}