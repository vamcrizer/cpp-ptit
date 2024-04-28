#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int, int> &a, pair<int, int> &b){
	if(a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

void sort(map<int, int> &mp){
	vector<pair<int, int>> v;
	for(auto &x : mp){
		v.push_back(x);
	}
	sort(v.begin(), v.end(), cmp);
	for(auto &x : v){
		for(int i = 0; i < x.second; i++) cout << x.first << " ";
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		map<int, int> mp;
		int a;
		for(int i = 0; i < n; i++){
			cin >> a;
			mp[a]++;
		}
		sort(mp);
		cout << endl;
	}
	// Biden
	return 0;
}
