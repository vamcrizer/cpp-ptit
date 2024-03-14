#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int a;
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		cin >> a;
		mp[a]++;
	}
	for(auto x : mp){
		cout << x.first << " ";
	}
	// Biden
	return 0;
}

