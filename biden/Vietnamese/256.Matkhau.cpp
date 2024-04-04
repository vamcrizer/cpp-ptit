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

typedef struct tu{
	string s;
	int len;
} tu;

bool cmp(tu a, tu b){
	if(a.len == b.len) return a.s > b.s;
	return a.len > b.len;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	tu a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].s;
		a[i].len = a[i].s.size();
	}
	sort(a, a + n, cmp);
	int cnt = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i].s == a[j].s) cnt += 2;
			else {
				if(a[i].s.find(a[j].s) != string::npos) cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}
