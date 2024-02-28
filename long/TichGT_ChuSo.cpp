// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

str s[] = {"1", "1", "2", "3", "322", "5", "53", "7", "7222", "7332"};

void edit(str &a, int n){
	for(int i=0; i<n-1; i++){
		int m = i;
		for(int j=i+1; j<n; j++){
			if(a[j] > a[m]) m = j;
		}swap(a[i], a[m]);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		str a; cin >> a;
		str r;
		for(int i=0; i<n; i++){
			if(a[i] != '0' && a[i] != '1'){
				r += s[a[i] - '0'];
			}
		}int l = r.size();
		edit(r, l);
		cout << r << endl;
	}	
}