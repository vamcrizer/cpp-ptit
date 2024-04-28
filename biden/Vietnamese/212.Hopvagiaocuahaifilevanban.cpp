#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	ifstream input1 ("DATA1.in");
	ifstream input2 ("DATA2.in");
	set<string> se1, se2;
	map<string, int> mp;
	while(input1 >> s){
		for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
		se1.insert(s);
	}
	while(input2 >> s){
		for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
		se2.insert(s);
	}
	for(auto x : se1) mp[x]++;
	for(auto x : se2) mp[x]++;
    for(auto x : mp) 
        cout << x.first << " ";
	cout << endl;
    for(auto x : mp){
    	if(x.second > 1) cout << x.first << " ";
	}
	// Biden
	return 0;
}
