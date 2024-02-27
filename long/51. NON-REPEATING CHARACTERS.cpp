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
		string s; cin >> s;
		int n = s.size(), dem[300] = {0};
		for(int i=0; i<n; i++){
			++dem[s[i]];
		}
		for(int i=0; i<n; i++){
			if(dem[s[i]]==1){
				cout << s[i];
			}
		}cout << endl;
	}
}