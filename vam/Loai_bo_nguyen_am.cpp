// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void solve(str a){
	int n = a.size();
	for(int i=0; i<n; i++){
		if(a[i] >= 'A' && a[i] <= 'Z'){
			a[i] += 32;
		}if(!(a[i]=='u' || a[i]=='e' || a[i]=='o' || a[i]=='a' || a[i]=='i' || a[i]=='y')){
			cout << '.' << a[i];
		}
	}
}

int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);

	str a; cin >> a;
	solve(a);
}