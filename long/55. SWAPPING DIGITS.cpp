#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		char a[123456] = {'\0'}; cin >> a;
		int n = strlen(a), dk = 0;
		for(int i=n-2; i>=0; i--){
			char m = 0;
			int pos = i;
			for(int j=i+1; j<n; j++){
				if(a[i] > a[j] && a[j] > m){
					m = a[j];
					pos = j;
					dk = 1;
				}
			}if(dk==1){
				if(!(i==0 && a[pos]=='0')){
					swap(a[i], a[pos]);
					cout << a; break;
				}else dk = 0;
			}
		}if(!dk) cout << -1;
		cout << endl;
	}
}