#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int x_4axis[] = {-1, 0, 0, 1};
int y_4axis[] = {0, -1, 1, 0};
int x_8axis[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y_8axis[] = {-1, 0, 1, -1, 1, -1, 0, 1};

// |---------------------------------\   B
// \ i-1 , j-1 | i-1 , j | i+1 , j+1 |   I
// |---------------------------------\   D
// \  i  , j-1 |  i  , j |  i  , j+1 |   E
// |---------------------------------\   N
// \ i+1 , j-1 | i+1 , j | i+1 , j+1 |   J
// |---------------------------------\   R
//                                       .

int cntMaxKDist(string s, int k){ // count subarray with distinct number <= k
	int l = 0, r = 0, n = s.size(), cnt = 0, subcnt = 0;
	vector<int> mp(26, 0);
	// Dynamic Resizing Window
	// A A A A H H I B C 2
	// -> -> -> -> I => cnt > k (3 > 2) => l++ until cnt == k => subarray = number of char in [l, r]
	//         -> -> B => cnt > k (again) => l++ until cnt == k => subarray = number of char in [l, r]
	//            -> -> C => cnt > k (again) => l++ until cnt == k => subarray = number of char in [l, r]
	// r reach limit => break => return subarray cnt
	while(r < n){
		mp[s[r] - 'a']++;
		if(mp[s[r] - 'a'] == 1) cnt++;
		while(cnt > k){
			mp[s[l] - 'a']--;
			if(mp[s[l] - 'a'] == 0) cnt--;
			l++;
		}
		subcnt += r - l + 1;
		r++;
	}
	return subcnt;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s;
		int n;
		cin >> s >> n;
		cout << cntMaxKDist(s, n) - cntMaxKDist(s, n - 1) << endl;
	}
	return 0;
}

