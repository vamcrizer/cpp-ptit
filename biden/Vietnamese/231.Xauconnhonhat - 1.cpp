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

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int cnt = 0, begin = 0, end = 1e9;
		int dem[300] = {0};
		for(char x : s2){
			if(dem[x] == 0) cnt++;
			dem[x]++;
		}
		int l = 0, r = 0;
		while(r < s1.size()){
			dem[s1[r]]--;
			if(dem[s1[r]] == 0) cnt--;
			while(cnt == 0){
				if(end > r - l + 1){
					end = r - l + 1;
					begin = l;
				}
				dem[s1[l]]++;
				if(dem[s1[l]] > 0) cnt++;
				l++;
			}
			r++;
		}
		if(end != 1e9) cout << s1.substr(begin, end) << endl;
		else cout << "-1" << endl;
	}
	return 0;
}

