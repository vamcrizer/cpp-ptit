#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int s;
	ifstream input ("DATA.in");
	map<int, int> mp;
	while(input >> s){
		mp[s]++;
	}
    for(auto x : mp) 
        cout << x.first << " " << x.second << endl; 
	// Biden
	return 0;
}
