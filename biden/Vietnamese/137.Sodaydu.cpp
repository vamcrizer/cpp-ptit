#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s;
	    cin >> s;
		map<char, int> mp;
		int check = 1;
	    for(int i = 0; i < s.size(); i++){
	    	if(!isdigit(s[i])){
	    		check = 0;
	    		break;
	    	}
	    	mp[s[i]] = 1;
		}
		if(!check || s[0] == '0'){
			printf("INVALID\n");
			continue;
		}
	    if(mp.size() == 10) printf("YES\n");
	    else printf("NO\n");
	}
	// Biden
	return 0;
}

