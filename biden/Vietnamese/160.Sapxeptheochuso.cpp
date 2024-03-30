#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(string a, string b){
	string tmp1 = a + b;
	string tmp2 = b + a;
	return tmp1 > tmp2;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<string> v;
		string s, tmp1, tmp2;
		for(int i = 0; i < n; i++){
			cin >> s;
			v.push_back(s);
		}
		sort(v.begin(), v.end(), cmp);
		for(int i = 0; i < n; i++){
			cout << v[i];
		}
		cout << endl;
	}
	// Biden
	return 0;
}

