#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	ifstream input ("VANBAN.in");
	map<string, int> mp;
	while(input >> s){
		for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
		mp[s]++;
	}
    for(auto x : mp) 
        cout << x.first << endl; 
	// Biden
	return 0;
}
