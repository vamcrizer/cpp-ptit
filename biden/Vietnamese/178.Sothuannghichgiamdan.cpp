#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct cmp{
	bool operator()(string a, string b){
		if(a.size() == b.size()) return a > b;
		return a.size() > b.size();
	}
};

bool check(string s){
	if(s.size() == 1) return 0;
	for(int i = 0, j = s.size() - 1; i <= s.size() / 2; i++, j--){
		if(s[i] != s[j]) return 0;
	}
	return 1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	map<string, int, cmp> mp;
	while(cin >> s){
		if(check(s)) mp[s]++;
	}
	for(auto x : mp){
		cout << x.first << " " << x.second << endl;
	}
	// Biden
	return 0;
}

