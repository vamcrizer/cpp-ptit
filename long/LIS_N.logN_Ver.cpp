// LonggVu.
#include<bits/stdc++.h>
using namespace std;
// it's AC time! <3
#define LonggVu() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fi first
#define se second
#define pb push_back
#define is insert
using ll = long long int;
using ld = long double;
using str = string;



int main(){
	LonggVu();

	int n; cin >> n;
	int a[n+5];
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	vector<int> v;
	v.pb(a[1]);
	for(int i=2; i<=n; i++){
		if(a[i] > v.back()){
			v.pb(a[i]);
		}else{
			int pos = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
			v[pos] = a[i];
		}
	}cout << v.size();
}