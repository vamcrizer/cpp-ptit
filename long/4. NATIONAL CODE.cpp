#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;

void solve(char a[]){
	int n = strlen(a), stt = 0;
	char r[22] = {'\0'};
	for(int i=0; i<n; i++){
		if(!(a[i]=='0' && a[i+1]=='8' && a[i+2]=='4') && !(a[i]=='8' && a[i-1]=='0' && a[i+1]=='4') && !(a[i]=='4' && a[i-1]=='8' && a[i-2]=='0')){
			r[stt++] = a[i];
		}
	}cout << r << endl;
}
int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		char a[22]; cin >> a;
		solve(a);
	}
}