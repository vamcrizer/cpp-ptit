// 4 diem tren mp
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

struct td{
	ld x, y, z;
};
typedef struct td td;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while(t--){
		td a[10];
		ld m[10][10];
		for(int i=1; i<=4; i++){
			cin >> a[i].x >> a[i].y >> a[i].z;
			m[i][1] = a[i].x;
			m[i][2] = a[i].y;
			m[i][3] = a[i].z;
			m[i][4] = 1.0;
		}
		ld res = (a[2].x - a[1].x)*(a[3].y - a[1].y)*(a[4].z - a[1].z) + (a[3].x - a[1].x)*(a[4].y - a[1].y)*(a[2].z - a[1].z) + (a[4].x - a[1].x)*(a[2].y - a[1].y)*(a[3].z - a[1].z) - (a[3].x - a[1].x)*(a[2].y - a[1].y)*(a[4].z - a[1].z) - (a[2].x - a[1].x)*(a[4].y - a[1].y)*(a[3].z - a[1].z) - (a[4].x - a[1].x)*(a[3].y - a[1].y)*(a[2].z - a[1].z);
		if(res == 0) cout << "YES\n";
		else cout << "NO\n";
	}
}